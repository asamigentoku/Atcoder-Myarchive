#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string str;
    cout<<"数字を"<<endl;
    cin>>str;
    int n=str.size();
    vector<int> vec;
    for (char c : str) {
        // '0' を引くことで文字 '1'～'9' を数値に変換
        vec.push_back(c - '0');
    }
    for(int i=0;i<n;i++){
        vec.at(i)=int(vec.at(i));
        cout<<vec.at(i)<<endl;

    }
}