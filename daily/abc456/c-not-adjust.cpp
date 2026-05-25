#include <iostream>
#include <vector>
#include <string>
using namespace std;

//abccbaa

int main(){
    string s;
    cin>>s;
    long long ans=0;
    int start=0;
    int len;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1] |i+1==s.size()){
            len=i+1-start;
            ans+=(long long)len*(len+1)/2;
            start=i+1;
        }
    }
    cout<<ans%998244353<<endl;

}