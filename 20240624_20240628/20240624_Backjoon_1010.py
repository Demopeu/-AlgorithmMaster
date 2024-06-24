from math import factorial
T = int(input())
for testCase in range(1,T+1):
    N,M = map(int,input().split())
    print(factorial(M)//(factorial(N)*factorial(M-N)))