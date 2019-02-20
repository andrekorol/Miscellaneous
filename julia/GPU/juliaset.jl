using CuArrays, FileIO, Colors, GPUArrays, BenchmarkTools
using CuArrays: CuArray
"""
The function calculating the Julia set
"""
function juliaset(z0, maxiter)
    c = ComplexF32(-0.5, 0.75)
    z = z0

    for i in 1:maxiter
        abs2(z) > 4f0 && return (i - 1) % UInt8
        z = z * z + c
    end

    return maxiter % UInt8 # % is used to convert without overflow check
end

N_range = 100:50:2^12
cutimes, jltimes = Float64[], Float64[]

function run_bench(in, out)
    # use dot syntax to apply `juliaset` to each element of q_converted
    # and write the output to result
    out .= juliaset.(in, 16)

    # all calls to the GPU are scheduled asynchronous
    # so we need to synchronize
    GPUArrays.synchronize(out)
end

# store a reference to the last results for plotting
last_jl, last_cu = nothing, nothing
for N in N_range
    w, h = N, N
    q = [ComplexF32(r, i) for i = 1:-(2.0 / w):-1, r = -1.5:(3.0 / h):1.5]
    for (times, Typ) in ((cutimes, CuArray), (jltimes, Array))
        # convert to Array or CuArray - moving the calculation to Cpu/GPU
        q_converted = Typ(q)
        result = Typ(zeros(UInt8, size(q)))

        for i in 1:10 # 5 samples per size
            # benchmarking macro, all variables need to be prefixed with $
            t = Base.@elapsed begin
                run_bench(q_converted, result)
            end

            global last_jl, last_cu # we're in local scope

            if result isa CuArray
                last_cu = result
            else
                last_jl = result
            end

            push!(times, t)
        end
    end
end

cu_jl = hcat(Array(last_cu), last_jl)
cmap = colormap("Blues", 16 + 1)
color_lookup(val, cmap) = cmap[val + 1]

if Sys.iswindows()
    if split(pwd(), '\\')[end] == "julia"
        save("$(pwd())\\GPU\\results\\juliaset.png",
        color_lookup.(cu_jl, (cmap,)))
    elseif split(pwd(), "\\")[end] == "GPU"
        save("$(pwd())\\results\\juliaset.png", color_lookup.(cu_jl, (cmap,)))
    end
else
    if split(pwd(), '/')[end] == "julia"
        save("$(pwd())/GPU/results/juliaset.png", color_lookup.(cu_jl, (cmap,)))
    elseif split(pwd(), '/')[end] == "GPU"
        save("$(pwd())/results/juliaset.png", color_lookup.(cu_jl, (cmap,)))
    end
end
