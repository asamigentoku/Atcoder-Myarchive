#include <iostream>
#include <vector>
using namespace std;


int solve(int num,int M,vector <int> &entry,vector <int> &exit,vector <int> &memo){
    if(memo[num]!=-1){
        return memo[num];
    }
    int longpath=0;
    bool hasnext=false;
    for(int i=1;i<=M;i++){
        if(entry[i]==num){
            int path=0;
            path=solve(exit[i],M,entry,exit,memo)+1;
            if(path>longpath){
                longpath=path;
            }
            hasnext=true;
        }
    }
    if(hasnext==false){
        memo[num]=0;
        return 0;
    }
    memo[num]=longpath;
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
    for(int i=1;i<=N;i++){
        int path=solve(i,M,entry,exit,memo);
        if(path>longedpath){
            longedpath=path;
        }
    }
    cout<<longedpath<<endl;
}