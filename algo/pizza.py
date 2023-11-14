#A=Aピザの値段　B=Bピザの値段　C=ABピザの値段　X=Aの必要枚数　Y = Bの非つよ枚数
A,B,C,X,Y = list(map(int,input().split()))
ans = 10**10

for i in range(10**5+1):
    tmp = (2*C*i + A*max((X-i),0) + B*max(Y-i,0))
    ans = min (ans, tmp)
    
print(ans)