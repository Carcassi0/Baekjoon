#2675

t = int(input())
t_time = 0
while(t_time<t):
    t_time += 1
    a, b = map(str, input().split())

    multiply = int(a)
    data = list(b)

    i = 0
    k = 0
    word = []
    result = ""
    while(i<len(data)):
        word.append(data[i] * multiply)
        i += 1
    
    for k in word:
        result += k
            
    print(result)