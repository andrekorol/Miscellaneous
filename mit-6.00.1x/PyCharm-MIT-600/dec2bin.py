def dec2bin(num):
    import math
    def float_to_binary(numb):
        exponent = 0
        shifted_num = numb
        while shifted_num != int(shifted_num):
            shifted_num *= 2
            exponent += 1
        if exponent == 0:
            return '{0:0b}'.format(int(shifted_num))
        binary = '{0:0{1}b}'.format(int(shifted_num), exponent + 1)
        integer_part = binary[:-exponent]
        fractional_part = binary[-exponent:].rstrip('0')
        return '{0}.{1}'.format(integer_part, fractional_part)

    def floathex_to_binary(floathex):
        number = float.fromhex(floathex)
        return float_to_binary(number)

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
        num_hex = float.hex(num)
        result = floathex_to_binary(num_hex)


    elif num < 0 and type(num) is float:
        num_hex = float.hex(num)
        result = floathex_to_binary(num_hex)


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
    