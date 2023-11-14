N = int(input())
ans = 0

for i in range(1,N+1,2):
    cnt = 0
    for k in range(1,i+1):
        if i%k == 0:
            cnt +=1
    if cnt == 8:
        ans += 1
print(ans)
