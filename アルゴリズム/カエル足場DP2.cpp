#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

long long kaeru(int N,int K,vector <long long> &cost,vector <long long> &h){
    if(cost[N]!=-1){
        return cost[N];
    }
    if(N==0){
        return 0;
    }
    long long mincost=LLONG_MAX;
    for(int i=1;i<=K;i++){
        if(N-i>=0){
            if(abs(h[N]-h[N-i])+kaeru(N-i,K,cost,h)<mincost){
                mincost=abs(h[N]-h[N-i])+kaeru(N-i,K,cost,h);
            }
        }
    }
    cost[N]=mincost;
    return cost[N];
}

int main(){
    int N;
    cin>>N;
    int K;
    cin>>K;
    vector <long long> h(N);
    vector <long long> cost(N+1,-1);
    for(int i=0;i<N;i++){
        cin>>h[i];
    }
    cout<<kaeru(N-1,K,cost,h)<<endl;
}