from itertools import product
N = int(input())
ls = []
for n in range(N) :
    x,y = map(int, input().split())
    ls.append((x,y))
ls.sort()

for x in ls:
    print(x)
    


