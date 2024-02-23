hour, miniute, pre_seconed= map(int, input().split())
timeset = int(input())

seconed = pre_seconed + timeset

while(seconed>=60):
    miniute = miniute + 1
    seconed = seconed - 60
while(miniute>=60):
    hour = hour + 1
    miniute = miniute - 60
while(hour>=24):
    hour = hour - 24

print('%d %d %d' %(hour, miniute, seconed))
