#include <iostream>
#include <vector>
using namespace std;

int main(){
    int h,w;
    cin>>w>>h;
    int num;
    vector<vector<int>> a(h,vector<int>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            num=4;
            if(i==h-1){
                num-=1;
            }
            if(i==0){
                num-=1;
            }
            
            if(j==w-1){
                num-=1;
            }
            if(j==0){
                num-=1;
            }


            a[i][j]=num;
        }
    }
    for(int j=0;j<w;j++){
        for(int i=0;i<h;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
