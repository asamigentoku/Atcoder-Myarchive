#include <iostream>
#include <vector>
using namespace std;
using ll=long long;

int main(){
    ll n,q;
    int t,x,y;
    cin>>n>>q;
    ll change;
    vector<ll> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<q;i++){
        cin>>t;
        if(t==1){
            //要素を変える
            cin>>x>>y;
            change=p[x];
            p[x]=p[y];
            p[y]=change;
        } else if(t==2){
            //逆順列
        }
    }
}