#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
    vector <ll> a(n);
    vector <ll> b(n);
    vector <ll> c(n);
    vector <ll> dp_a(n);
    vector <ll> dp_b(n);
    vector <ll> dp_c(n);
    for (int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        dp_a[i]=a[0];dp_b[i]=b[0];dp_c[i]=c[0];
    }
    //普通に考えればN*3でO(3N)これより減らせる
    //それぞれの日にちにおいてそれぞれの行動をとった時のdpテーブルを作ればいい

    //太郎くんは2日連続で同じことを行うことがない
    for (int i=1;i<n;i++){
        //i日目にaをする
        dp_a[i]=max(dp_b[i-1],dp_c[i-1])+a[i];
        //i日目にbをする
        dp_b[i]=max(dp_a[i-1],dp_c[i-1])+b[i];
        //i日目にcをする
        dp_c[i]=max(dp_a[i-1],dp_b[i-1])+c[i];
    }
    cout << max({dp_a[n - 1], dp_b[n - 1], dp_c[n - 1]}) << endl;
}