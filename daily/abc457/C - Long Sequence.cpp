#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N,K;
    cin>>N>>K;
    vector <vector <int>> A(N);
    for(int i=0;i<N;i++){
        int L;
        cin>>L;
        vector <int> a(L);
        for(int j=0;j<L;j++){
            cin>>a[j];
        }
        A[i]=a;
    }
    vector <long long> C(N);
    vector<long long> v3;
    long long sum=0;
    vector <long long> sums(N);
    for(int i=0;i<N;i++){
        cin>>C[i];
        sum+=A[i].size()*C[i];
        sums[i]=sum;
    }
    for(int i=0;i<N;i++){
        long long amari=K%A[i].size();
        if(K>=sums[i]){
            cout<<A[i][amari-1]<<endl;
            break;
        }
    }
}