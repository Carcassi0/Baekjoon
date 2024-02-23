#9498

a = int(input())
grade = ''

if(a>=90):
    grade += 'A'
elif(a>=80 and 89>=a):
    grade += 'B'
elif(a>=70 and 79>=a):
    grade += 'C'
elif(a>=60 and 69>=a):
    grade += 'D'
else:
    grade += 'F'
print(grade)