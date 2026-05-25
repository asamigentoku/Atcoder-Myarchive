#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    int n;
    cin>>s;
    cin>>n;
    string result1=s.substr(0,s.size()-n);
    string result=result1.substr(n,result1.size());
    cout<<result<<endl;
}