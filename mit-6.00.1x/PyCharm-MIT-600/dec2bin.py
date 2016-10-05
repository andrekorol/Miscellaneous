def dec2bin(num):
    import math
    if 0 < num < 1:
        p = 0
        while ((2 ** p) * num) % 1 != 0:
            p += 1
        x = int(num * (2 ** p))
        result = ''
        if x == 0:
            result = '0'
        while x > 0:
            result = str(x % 2) + result
            x //= 2
        for i in range(p - len(result)):
            result = '0' + result
        result = result[0:-p] + '.' + result[-p:]

    elif num > 0 and type(num) is float:
        i, d = math.modf(num)

        if i < 0:
            isneg = True
            i = abs(i)
        else:
            isneg = False

        integer_part = ''

        if i == 0:
            integer_part = '0'

        while i > 0:
            integer_part = str(i % 2) + integer_part
            i //= 2

        if isneg:
            integer_part = '-' + integer_part

        p = 0
        while ((2 ** p) * d) % 1 != 0:
            p += 1
        y = int(d * (2 ** p))
        decimal_part = ''
        if y == 0:
            decimal_part = '0'
        while y > 0:
            decimal_part = str(y % 2) + decimal_part
            y //= 2
        for i in range(p - len(decimal_part)):
            decimal_part = '0' + decimal_part

        decimal_part = decimal_part[0:-p] + '.' + decimal_part[-p:]

        result = integer_part + decimal_part

    else:

        if num < 0:
            isneg = True
            num = abs(num)
        else:
            isneg = False

        result = ''

        if num == 0:
            result = '0'

        while num > 0:
            result = str(num % 2) + result
            num //= 2

        if isneg:
            result = '-' + result

    return result
    print(decimal_part)
    print(integer_part)