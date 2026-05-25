//範囲外だったらNo

//dfs

#include <iostream>
using namespace std;

int main(){
    int X;
    cin>>X;
    if(X>=3 && X<=18 ){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }
}