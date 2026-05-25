#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

long long np(vector <long long> &score,long long capacity,vector<long long> &w,vector<long long> &v,int N){
    if(score[capacity]!=-1){
        return score[capacity];
    }
    if(capacity==0){
        return 0;
    }
    long long max=0;
    for(int i=0;i<N;i++){
        if(max<v[i]+np(score,capacity-w[i],w,v,N) && capacity>=w[i]){
            max=v[i]+np(score,capacity-w[i],w,v,N);
        }
    }
    score[capacity]=max;
    return max; 
}

int main(){
    vector <long long> weights(5);
    vector <long long> values(5);
    weights={5,12,15,20,21};
    values={3,10,13,18,20};
    long long capacity=50;
    vector <long long> score(capacity+1,-1);
    int N=weights.size();
    long long max_value =np(score,capacity,weights,values,N);
    cout<<max_value<<endl;
}