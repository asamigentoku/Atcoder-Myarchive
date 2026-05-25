#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s="HelloWorld";
    int x;
    cin>>x;
    s.erase(x-1,1);
    cout<<s<<endl;
}