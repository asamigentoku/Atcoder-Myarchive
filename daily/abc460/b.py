n=int(input())
case=[]
for i in range(0,n):
    case.append(list(map(int,input().split())))

for i in case:
    x1,y1,r1,x2,y2,r2=i
    d=((x1-x2)**2+(y1-y2)**2)

    if d<=(r1+r2)**2 and d>=abs(r1-r2)**2:
        print("Yes")
    else:
        print("No")
