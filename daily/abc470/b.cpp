#include <iostream>
#include <vector>
using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;
    vector<ll> c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    //最も大きい数を求める
    ll max=0;
    for(int i=0;i<n;i++){
        if(c[i]>max){
            max=c[i];
        }
    }

    //最頻値
    vector<ll> count(max+1,0);
    for(int i=0;i<n;i++){
        count[c[i]]++;
    }
    ll mode=0;
    for(ll i=0;i<=max;i++){
        if(count[i]>count[mode]){
            mode=i;
        }
    }
    cout<<n-count[mode]<<endl;
    //それからその

}