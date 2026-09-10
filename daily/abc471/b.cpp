#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cctype>
using namespace std;
using ll=long long;

bool check(string target,vector<ll> &memo){
    bool is_ex=false;
    for(int i=0;i<memo.size();i++){

    }
}

int main(){
    int n;
    cin>>n;
    string name;

    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>name;
        for(char &c:name){
            c=tolower(c);
        }
        s[i]=name;
    }

    map<string,int> count;
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    int max_num;
    for (auto [name, number] : count) {
        max_num = max(max_num, number);
    }
    cout<<max_num<<endl;
}