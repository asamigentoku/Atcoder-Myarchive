n,q=map(int,input().split())
p=list(map(int,input().split()))
#ポイント1 pは順列p=[1,2,3,4,5]
#要素=順番ってこと

a=[]
for _ in range(q):
    a.append(int(input()))

used=[False]*(n-1)

moved=[]

for a_i in reversed(a):
    if not used[a_i]:
        moved.append(a_i)
        used[a_i]=True


answer=[]

for p_i in p:
    if not used[p_i]:
        answer.append(p_i)

answer.extend(reversed(moved))

print(*answer)


  
