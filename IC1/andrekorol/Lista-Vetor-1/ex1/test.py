#!usr/env/bin python3
import sys
import os
import re
script, filename = sys.argv

fin = open("data.txt", 'r')
for line in fin:
    if "A percentagem de aprovação foi de" in line:
        if int(re.search(r'\d+', line).group()) != 0:
            print(line)
            fin.close()
            sys.exit(1)
sys.exit(0)


