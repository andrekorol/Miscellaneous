a, b = [int(x) for x in input().split()]
num = 0
give = 1
while True:
    if num % 2 == 0:
        if a - give >= 0:
            a -= give
            give += 1
            num += 1
        else:
            print("Vladik")
            break
    else:
        if b - give >= 0:
            b -= give
            give += 1
            num += 1
        else:
            print("Valera")
            break
