num = int(input("Entre um número para ser calculado seu fatorial"))
result = 1
while num > 0:
    result *= num
    num -= 1
    print(result)

