#!usr/env/bin
f = open("ex3.txt", 'w')
i = 1
j = 0
while(j < 10):
    f.write(str(i) + '\n')
    i += 2
    j += 1
p = 0    
j = 0
while(j < 10):
    f.write(str(p) + '\n')
    p += 2
    j += 1
f.write("-1")
f.close()
    
