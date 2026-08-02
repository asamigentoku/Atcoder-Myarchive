#include <iostream>
#include <vector>
using namespace std;
using ll= long long;
const long long INF = 1LL << 60;

int main(){
    ll n;
    cin>>n;
    vector<ll> h(n);
    vector<ll> dp(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
        dp[i]=INF;
    }
    dp[0]=0;
    for (int i=0;i<n;i++){
        if(i>0){
            dp[i]=min(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
            if(i>1){
                dp[i]=min(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
            }
        }
    }
    cout<<dp[n-1]<<endl;

}