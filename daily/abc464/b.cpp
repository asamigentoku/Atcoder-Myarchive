#include <iostream>
#include <vector>
#include <string>
#include <tuple>
using namespace std;

tuple<long long,long long,long long,long long,bool> solve(long long w1,long long h1,long long w2,long long h2,const vector<string>& c){
    bool h_for,h_back,w_for,w_back;
    h_for = h_back = w_for = w_back = false;
    for(int i=h1;i<h2;i++){
        for(int j=w1;j<w2;j++){
            // if(c[i][j]=="#"){
            if(c[i][j]=='#'){
                if(i==h1){
                    h_for=true;
                }
                if(i==h2-1){
                    h_back=true;
                }
                if(j==w1){
                    w_for=true;
                }
                if(j==w2-1){
                    w_back=true;
                }
            }
        }
    }
    if(!h_for){
        h1+=1;
    }
    if(!h_back){
        h2-=1;
    }
    if(!w_for){
        w1+=1;
    }
    if(!w_back){
        w2-=1;
    }
    // bool result = h_for || h_back || w_for || w_back;
    bool result = !h_for || !h_back || !w_for || !w_back;
    return {h1,h2,w1,w2,result};
}

int main(){
    long long h,w;
    cin >> h >> w;
    vector<string> c(h);

    for (int i = 0; i < h; i++) {
        cin >> c[i];
    }
    long long h1,h2,w1,w2;
    h1=0;w1=0;
    w2=w;h2=h;
    bool result=true;
    while(result){
        tie(h1,h2,w1,w2,result)=solve(w1,h1,w2,h2,c);
    }
    for(int i=h1;i<h2;i++){
        for(int j=w1;j<w2;j++){
            // cout<<c[i][j]<<endl;
            cout<<c[i][j];
        }
        cout<<endl;
    }
}