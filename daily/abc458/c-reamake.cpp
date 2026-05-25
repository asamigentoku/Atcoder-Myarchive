#include <iostream>
#include <string>

using namespace std;
int main(){
    string s;
    cin>>s;
    long long  count=0;
    long long left,right;
    for(int i=0;i<s.size();i++){
        if(s[i]=='C'){
            left=i+1;
            right=s.size()-i;
            count+=min(left,right);
        }
    }
    cout<<count<<endl;
}