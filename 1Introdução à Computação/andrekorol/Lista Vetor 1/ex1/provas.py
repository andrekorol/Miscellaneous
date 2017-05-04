#!usr/env/bin python3
import sys
import random
script, filename = sys.argv
open(filename, 'w').close()
f = open(filename, "w")

letters = ['A', 'B', 'C', 'D', 'E']
n = 0
while n < 8:
    i = random.randint(0, 4)
    f.write(letters[i] + "\n")
    n += 1
n = 0

while n < 10:
    j = 0
    while j < 8:
        i = random.randint(0, 4)
        f.write(letters[i] + "\n")
        j += 1

    n += 1
f.close()
