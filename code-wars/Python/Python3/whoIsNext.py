# Code Wars Kata named "Double Cola"



def whoIsNext(names, r):
    n = r - 1
    i = 5
    while n >= i:
        n -= i
        i *= 2
    return names[int(n / (i / 5))]

# for i in range(1,100,1):
print(whoIsNext(["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"], 7230702951))

# import unittest
#
# class whoIsNextTest(unittest.TestCase):
#     def testWhoIsNext(self):
#         names = ["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]
#         r = 1
#         res = 'Sheldon'
#         self.assertEqual(whoIsNext(names, r), (res), 'Test not passed!')
#
# test = whoIsNextTest()
# print(test.testWhoIsNext())