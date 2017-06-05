import math
n, k = [int(x) for x in input().split()]
marks = [int(x) for x in input().split()]
marksSize = float(n)
notas = float(sum(marks))
grade = notas / float(n)
if grade - int(grade) == 0.5:
    grade = math.ceil(grade)
else:
    grade = round(grade)

if grade == k:
    graduated = True
else:
    graduated = False
    while graduated is False:
        notas += k
        marksSize += 1
        grade = notas / marksSize
        if grade - int(grade) == 0.5:
            grade = math.ceil(grade)
        else:
            grade = round(grade)
        if grade == k:
            graduated = True

print(int(marksSize - n))
