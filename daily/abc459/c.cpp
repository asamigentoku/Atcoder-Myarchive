#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n,q;
    cin>>n>>q;
    int q1,x,mn=0;
    vector<long long> a(n+1);
    vector <long long> c(q+1);
    for(int i=0;i<q;i++){
        cin>>q1>>x;
        if(q1==1){
            a[x]++;
            c[a[x]]++;
            if(c[a[x]]==n){
                mn=a[x];
            }
        }
        if(q1==2){
            if(x>q-mn)cout<<0<<endl;
            else cout<<c[x+mn]<<endl;
        }
    }


}