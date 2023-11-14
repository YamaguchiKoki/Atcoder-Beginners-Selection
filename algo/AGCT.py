S = input()
now = 0
ans = 0
S += '$'

for s in S:
    if s in ('A', 'G', 'C', 'T'):
        now += 1
    else:
        ans = max (now,ans)
        now = 0


print(ans)