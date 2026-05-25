#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
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
    int x,y;
    cin>>x>>y;
    cout<<A[x-1][y-1]<<endl;
}