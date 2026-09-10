n=int(input())
p=list(map(int,input().split()))
ok=True
for i in range(n):
    if p[i]>(i//10+1)*10:
        ok=False

if(ok):
    print("Yes")
else:
    print("No")