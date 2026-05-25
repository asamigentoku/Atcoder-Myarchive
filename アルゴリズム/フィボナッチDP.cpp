#include <iostream>
#include <vector>
using namespace std;

long long fibo(int n,vector <long long> &memo){
    //C++では配列を引数にとるときは(&配列)で呼び出す
    if(memo[n]!=-1){
        return memo[n];
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    memo[n]=fibo(n-1,memo)+fibo(n-2,memo);
    return memo[n];
}

int main(){
    int n=1000;
    //インデックスが0~nまで計算できる配列を作る、-1を入れているのはまだ計算していないから
    vector <long long> memo(n+1,-1);
    cout<<fibo(n,memo)<<endl;
}