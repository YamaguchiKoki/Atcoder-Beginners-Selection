a = int(input())
b,c = list(map(int,input().split()))
s = input()

#前半で指定したプレースホルダに書式整形して挿入　普通正規表現とかで使う 
print("{} {}" .format(a+b+c, s))