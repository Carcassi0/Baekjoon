#1789

n = int(input())
time = 0
max = n
list = []
while True:
    time += 1
    if(max-time <= time):
        list.append(max)
        print(list)
        print(len(list))
        break
    else:
        max = max - time
        list.append(time)
        continue
    