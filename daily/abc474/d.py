n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))

w=[]

for i in range(n):
    if a[i]>b[i]:
        w.append(10**18)
    else:
        w.append(1)

if all(a[i]<=b[i] for i in range(n)):
    print("No")
else:
    print("Yes")
    print(*w)