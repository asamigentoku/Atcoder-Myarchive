par=[-1,-1,0,6,2,2,-1,6]

#同一帰属判定
def root(z):
    if(par[z]==-1):
        return z
    else:
        return root(par[z])
def issame(x,y):
    return (root(x)==root(y))

#結合
def unite(x,y):
    if(root(x)!=root(y)):
        par[root[x]]=root[y]

