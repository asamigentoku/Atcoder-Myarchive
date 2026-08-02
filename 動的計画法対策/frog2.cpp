#include <iostream>
#include <vector>
using namespace std;
using ll=long long;
const long long INF = 1LL<<60;

int main(){
    ll n,k;
    cin>>n>>k;
    vector<long long> h(n);
    vector<long long> dp(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
        dp[i]=INF;
    }
    dp[0]=0;
    //O(NK)
    for(int i=0;i<n;i++){
        //ここで全ての遷移
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
            }
        
        }
    }
    cout<<dp[n-1]<<endl;
}