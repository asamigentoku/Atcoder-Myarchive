#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> a(3,vector<int>(6));
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    int ans = 0;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
        for(int k=0; k<6; k++){
            if(   (a[0][i]==4 && a[1][j]==5 && a[2][k]==6)
            || (a[0][i]==4 && a[1][j]==6 && a[2][k]==5)
            || (a[0][i]==5 && a[1][j]==4 && a[2][k]==6)
            || (a[0][i]==5 && a[1][j]==6 && a[2][k]==4)
            || (a[0][i]==6 && a[1][j]==4 && a[2][k]==5)
            || (a[0][i]==6 && a[1][j]==5 && a[2][k]==4)){
            ans++;
            }
        }
        }
    }
    cout << (double)ans/216 << endl;
}