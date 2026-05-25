#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long vacation(int N,int num,vector<vector<long long>> &score,vector<vector<long long>> &happy){
    if(N==0){
        return 0;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            happy[i][j]+vacation(i-1,i,score,happy);
        }
    }
}


int main(){
    int N;
    cin>>N;
    vector<vector<long long>>happy(N,vector <long long>(3,-1));

    vector<vector<long long>>socre(N+1,vector <long long>(3,-1));
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            cin>>happy[i][j];
        }
    }
}