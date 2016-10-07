def odd(x):
    """
    x: int or float.

    returns: True if x is odd, False otherwise
    """

    result = None

    while x % 2 != 0:
        result = True
        break

    while x % 2 == 0:
        result = False
        break

    return result