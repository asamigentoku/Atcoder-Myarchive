#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
    set<ll> s;
    for(int i=0;i<n;i++){
        int ai;
        cin>>ai;
        //このinsertで自動的に昇順で並べらる
        s.insert(ai);
    }

    long long ans=0;
    int pos=0;
    for(int i=0;i<n;i++){
        //pos以下の最大の数をset関数から出す
        //pos以上の最小の数
        //s = {1, 4, 7, 10 pos = 6のとは7を出力するき
        auto it=s.lower_bound(pos);
        //{4,指定の数,7} {it,pos,--it}というように取り出せる
        int nxt;
        if(it==s.begin()){
            nxt=*it;

        } else if(it==s.end()){
            //pos以下の最大の数がないとき、一個前の数を取り出す
            --it;
            nxt = *it;
        } else{
            int cand1=*it;
            int cand2=*--it;

        }
    }
}