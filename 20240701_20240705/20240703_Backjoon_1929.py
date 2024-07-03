S,E = map(int,input().split())
lst = set(range(S,E+1))
if 1 in lst:
    lst.remove(1)
for i in range(2,E+1):
    lst-=set(list(range(2*i,E+1,i)))
lst = sorted(list(lst))
for i in lst:
    print(i)