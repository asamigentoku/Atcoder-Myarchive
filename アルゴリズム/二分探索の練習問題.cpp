#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N,K;
    cin>>N>>K;
    vector <long long> A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    long long left=0;
    long long right=N;
    long long m;
    while(right-left>1){
        m=(left+right)/2;
        if(A[m]>=K){
            right=m;
        }else{
            left=m;
        }
    }

    if(right==N){
        cout<<-1<<endl;
    } else{
        cout<<right<<endl;
    }

}