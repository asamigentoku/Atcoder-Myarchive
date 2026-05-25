N=int(input())
entry=[]
exit=[]
memo=[]
for _ in range(N-1):
    x,y=map(int,input().split())
    entry.append(x)
    exit.apeend(y)

def solve(num,color):
    combe=0
    for i in range(N-1):
        if(entry[i]==num):
            combe=solve(entry[i],0)+solve(entry[i],1)
    return combe