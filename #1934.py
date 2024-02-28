#1934

# time = int(input())


# for i in range(time):
#     divider = 2
#     number = 1
#     a, b = map(int, input().split())
#     while True:
#         if(divider>a and divider>b):
#             break
#         elif(a%divider==0 and b%divider==0):
#             a = a//divider
#             b = b//divider
#             number = number * divider
#             continue
#         elif(a%divider!=0 or b%divider!=0):
#             divider += 1
#             continue
#     print(number*a*b)
#     time = time-1        

## 이렇게 작성하면 런타임 에러 발생

# 유클리드 호제법 이용

time = int(input())

for i in range(time):
    def gcd(a, b):
        while b != 0:
            a, b = b, a%b
        return a

    def lcm(a, b):
        return (a*b)//gcd(a,b)

    a, b= map(int, input().split())

    print(lcm(a,b))