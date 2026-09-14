#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left,right,mid;
    left=0;
    //n-1だと実行されない時もあるから注意する
    right=n;
    //配列が昇順か降順かもチェックする
    while(right-left>1){
        mid=left+(right-left)/2;
        //leftは同じ条件=>も含まれているので最終結果として出力する
        if(a[mid]<=x){
            left=mid;
        }else{
            right=mid;
        }
    }
    cout<<left+1<<endl;
}