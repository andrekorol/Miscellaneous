a =int( input("Enter the integer you want to compare with it's floating-point approximation: \n"))
b = a - 1 + 0.9
c = str(b)
count = 0
while a != b:
    print("%f is still not considered equal to %d" % (b, a))
    c = str(b)
    c += "9"
    b = float(c)
    count += 1

print(count)
