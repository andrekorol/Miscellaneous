def f(n):
    if n == 0:
        return 1
    else:
        return n * f(n-1)

print(f(3))
print(f(1))
print(f(0))
