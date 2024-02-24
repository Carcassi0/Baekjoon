#11653

n = int(input())
if n == 1:
    exit()

i = 2
while True: 
    if n % i == 0:
        print(i)
        n = n / i
        continue
    elif n == 1:
        break
    else:
        i += 1

exit() 

        