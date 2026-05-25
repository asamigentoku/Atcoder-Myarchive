#include <iostream>
#include <vector>
using namespace std;


int solve(int N,int M,vector <int> &entry,vector <int> &exit,vector <int> &memo){
    if(memo[N]!=-1){
        return memo[N];
    }
    int longpath=0;
    for(int i=0;i<M;i++){
        if(entry[i]==N){
            int path=0;
            path=solve(exit[i],M,entry,exit,memo)+1;
            if(path>longpath){
                longpath=path;
            }
        }
    }
    memo[N]=longpath;
    return longpath;
}



int main(){
    int N,M;
    cin>>N>>M;
    vector <int> entry(M);
    vector <int> exit(M);
    vector <int> memo(N+1,-1);
    for(int i=0;i<M;i++){
        cin>>entry[i]>>exit[i];
    }
    int longedpath=-1;
    for(int i=0;i<N;i++){
        int path=solve(i,M,entry,exit,memo);
        if(path>longedpath){
            longedpath=path;
        }
    }
    cout<<longedpath<<endl;
}