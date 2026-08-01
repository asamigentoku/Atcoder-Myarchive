#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int e=0;
    int w=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='E'){
            e++;
        }else{
            w++;
        }
    }
    // if(e>w){
    //     cout<<"East"<<endl;
    // } else if (e<w){
    //     cout<<"West"<<endl;
    // } 
    cout << (e > w ? "East" : "West") << endl;
}
