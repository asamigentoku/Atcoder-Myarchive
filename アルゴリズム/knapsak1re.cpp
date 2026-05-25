#include <iostream>
#include <vector>

using namespace std;


int main(){
    int N,capacity;
    cin>>N;cin>>capacity;
    vector <long long> weights(N);
    vector <long long> values(N);
    
    for(int i=0;i<N;i++){
        cin>>weights[i]>>values[i];
    }
    //
    vector<vector<long long>> dp(N+1,vector<long long>(capacity+1,0));

    for(int i=0;i<N;i++){
        for(int w=0;w<=capacity;w++){
            //使わないときは今の最大価値を
            //前のものと比較して大きい方を
            dp[i+1][w]=max(dp[i+1][w],dp[i][w]);

            //使うときは
            if(w>=weights[i]){
                //もし新しいものを置く場合は現状での最大価値とある重み時の最大価値と今の価値を
                //との和を比較する
                dp[i+1][w]=max(dp[i+1][w], dp[i][w-weights[i]]+values[i]);
            }
        }
    }
    cout<<dp[N][capacity]<<endl;
}