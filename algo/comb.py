from itertools import combinations

N,X = list(map(int,input().split()))
cnt = 0

for c in list(combinations(range(1,N+1),3)):
    #print(c)
    if sum(c) == X:
        cnt += 1
print(cnt)
