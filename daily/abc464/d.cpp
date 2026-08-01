#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll=long long;

// dp[s]= { 前日の天気が 晴れ である場合の、前日までの嬉しさの最大値 }
// dp[r]= { 前日の天気が 雨 である場合の、前日までの嬉しさの最大値 }

int main(){
    int t;
    cin>>t;
    vector<long long> n(t);
    vector<string> w(t);
    // vector <vector <long long>> a(h,vector<long long>(w));
    vector<int> x;
    vector<int> y;
    vector<int> dp;
    ll s=0;
    ll r=0;

    //テストケース分
    for (int i=0;i<t;i++){
        cin>>n[i];
        x=vector<int>(n[i]);
        y=vector<int>(n[i]-1);
        cin>>w[i];
        for (int j=0;j<n[i];j++){
            cin>>x[j];
        }
         for (int j=0;j<n[i]-1;j++){
            cin>>y[j];
        }
        
        s=0;r=0;
        //初日の天気についても仮定で計算していくので
        //変える場合は-しないと
        if(w[i][0]=='S'){
            r-=x[0];
        }else{
            s-=x[0];
        }
        for (int day=1;day<n[i];day++){
            //前日が雨の場合は、晴れにすると最大値を増やせる
            //何もしない場合と比較
            //今の天気は晴れだと仮定
            ll ns=max(s,r+y[day-1]);

            //前日が晴れの場合は何もできないので
            //前日両方を変えない場合で比較する
            //今の天気は雨だと仮定
            ll nr=max(s,r);
            //雨の場合で

            //晴れだった時は雨と仮定した時を変更
            //雨だった時は晴れと仮定した方を変更
            if(w[i][day]=='S'){
                nr-=x[day];
            }else{
                ns-=x[day];
            }
            s=ns;
            r=nr;
        }
        cout<<max(s,r)<<endl;
    }
}