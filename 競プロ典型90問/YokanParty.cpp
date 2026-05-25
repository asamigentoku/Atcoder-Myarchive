// 問題URL:https://atcoder.jp/contests/typical90/tasks/typical90_a
// AC URL:https://atcoder.jp/contests/typical90/submissions/74207660
#include <iostream>
#include <vector>
using namespace std;

bool checks(long long x,long long K,long long L,long long N,vector<long long> A){
        long long pre=0;
        long long num=0;
        for(int i=0;i<N;i++){
            if(A[i]-pre>=x){
                pre=A[i];
                num++; 
            }
        }
        if(L-pre>=x){
            num++;
        }
        if(num>=K+1){
            return true;
        } else{
            return false;
        }
}

int main(){
    long long N,L,K;
    cin>>N>>L;
    cin>>K;
    vector <long long> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    long long right=L+1;
    long long left=0;
    long long m;
    while(right-left>1){
        m=(left+right)/2;
        //もし大きくて小さくできない時
        if(checks(m,K,L,N,A)){
            left=m;
        } else{
            //x以下にできる場合は右の値をさらに小さくして探索
            right=m;
        }
    }
    cout<<left<<endl;
}