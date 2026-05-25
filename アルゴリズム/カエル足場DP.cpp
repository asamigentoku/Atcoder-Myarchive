#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long kaeru(int N,vector <long long> &cost,vector <long long> &h){
    if(cost[N]!=-1){
        return cost[N];
    }
    if(N==0){
        return 0;
    }

    cost[N]=min(abs(h[N]-h[N-1])+kaeru(N-1,cost,h),abs(h[N]-h[N-2])+kaeru(N-2,cost,h));
    return cost[N];
}

int main(){
    int N;
    cin>>N;
    vector <long long> h(N);
    vector <long long> cost(N+1,-1);
    for(int i=0;i<N;i++){
        cin>>h[i];
    }
    cout<<kaeru(N-1,cost,h)<<endl;
}