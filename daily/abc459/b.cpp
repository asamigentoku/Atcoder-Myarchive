#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    cin>>N;
    string s[N];
    string mapping = "22233344455566677778889999";
    for(int i=0;i<N;i++){
        cin>>s[i];
    }
    
    for(int i=0;i<N;i++){
        cout<<mapping[s[i][0]-'a'];
    }
    cout<<endl;
}