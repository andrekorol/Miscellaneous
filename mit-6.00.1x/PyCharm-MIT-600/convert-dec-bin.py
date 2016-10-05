def dec2bin(num):
    if 0 < num < 1:
        p = 0
        while ((2 ** p)* num) % 1 != 0:
            p += 1
        x = int(num*(2 ** p))
        result = ''
        if x == 0:
            result = '0'
        while x > 0:
            result = str(x % 2) + result
            x = x // 2
        for i in range(p - len(result)):
            result = '0' + result
        result = result[0:-p] + '.' + result[-p:]

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

y = 0.333
print(conv_dec_to_bin(y))
