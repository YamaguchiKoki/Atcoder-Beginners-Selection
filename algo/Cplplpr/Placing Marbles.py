s = input()
cnt = 0
l = len(s)

for i in s:
    if i == '1':
        cnt += 1
print(cnt)