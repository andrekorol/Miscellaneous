# def is_prime(num):
#     numb = abs(num)
from math import sqrt
def factors(numb):
    step = 2 if numb % 2 else 1
    return set(reduce(list.__add__,
                ([i, numb//i] for i in range(1, int(sqrt(numb))+1, step) if numb % i == 0)))
#     if numb > 1 and len(factors(numb)) == 2:
#         return True
#     else:
#         return False
#
# print is_prime(50)
print factors(7230702951)
print 27 * 27