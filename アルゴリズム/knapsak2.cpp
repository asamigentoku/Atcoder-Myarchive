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
        if(capacity>=w[i]){
            long long val=v[i]+np(score,capacity-w[i],w,v,N);
            if(val>max){
                max=val;
            }
        }        
    }
    score[capacity]=max;
    return max;
}

int main(){
    long long  N,capacity;
    cin>>N;cin>>capacity;
    vector <long long> weights(N);
    vector <long long> values(N);
    for(int i=0;i<N;i++){
        cin>>weights[i]>>values[i];
    }
    vector <long long> score(capacity+1,-1);

    long long max_value =np(score,capacity,weights,values,N);
    cout<<max_value<<endl;
}