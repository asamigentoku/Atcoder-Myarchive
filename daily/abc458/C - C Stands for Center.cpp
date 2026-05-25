#include <iostream>
#include <string>

using namespace std;
int main(){
    string s;
    cin>>s;
    int center;
    int count=0;
    for(int n=1;n<=s.size();n+=2){
        // cout<<n<<endl;
        for(int i=0;i<s.size()-n+1;i++){
            center=i+(n+1)/2-1;
            // cout<<"center="<<center<<endl;
            if(s[center]=='C'){
                count++;
                // cout<<"n="<<n<<"i="<<i<<"s="<<s[center]<<endl;
            }
        }
    }
    cout<<count<<endl;
}