#10817


a, b, c = map(int, input().split())

list = [a, b, c]

for i in range(len(list)-1):
    minNum = i
    for j in range(i+1, len(list)):
        if(list[j]<list[minNum]):
            temp = list[minNum]
            list[minNum] = list[j]
            list[j] = temp

print(list[1])        