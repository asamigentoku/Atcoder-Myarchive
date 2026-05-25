//問題URL https://atcoder.jp/contests/typical90/tasks/typical90_b
//AC URL https://atcoder.jp/contests/typical90/submissions/74241967

#include <iostream>
#include <string>
using namespace std;

bool isvalid(const string &s){
    int score=0;
    for(auto c :s){
        if(c=='(') score++;
        else if(c==')') score--;
        if(score<0) return false;
    }
    return (score==0);
}

int main(){
    int N;
    cin>>N;
    //1<<Nは2^n
    for(int bit=0;bit<(1<<N);++bit){
        string S="";
        for (int i = N - 1; i >= 0; --i) {
            //桁数分iをシフトして、その桁が1か0かではんてい
            if (!(bit & (1<<i))) S += "(";
            else S += ")";
        }
        if(isvalid(S)){
            cout<<S<<endl;
        }
        
    }
    
}