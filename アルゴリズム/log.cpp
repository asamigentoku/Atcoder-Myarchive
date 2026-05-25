#include <iostream>
using namespace std;

//ここで作ることができるかの関数を作る

bool check(int price,int N){
    if(price*(price-1)/2>=N+1){
        return true;
    }
    return false;
}

int main(){
    int N;
    cin>>N;
    int right,left,m;
    right=N;
    left=0;
    while(right-left>1){
        m=(right+left)/2;
        if(check(m,N)){
            right=m;
        } else{
            left=m;
        }       
    }
    cout<<right<<endl;
}