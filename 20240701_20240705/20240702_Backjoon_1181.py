T = int(input())
lst = []
sorted_lst = sorted(list(set([input() for _ in range(T)])), key=lambda x: (len(x), x))
for string in sorted_lst:
    print(string)