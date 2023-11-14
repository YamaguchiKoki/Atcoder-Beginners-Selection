from itertools import combinations
N,M = list(map(int,input().split()))
A = []
ans = 0
for i in range(N):
    A.append(list(map(int,input().split())))

for m1,m2 in combinations(range(M),2):
    score = 0
    for a in A :
        score += max(a[m1],a[m2])
    ans = max(ans,score)
    
print(ans)