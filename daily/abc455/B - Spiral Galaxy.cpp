#include <iostream>
#include <vector>
using namespace std;

int main(){
    int w,h;
    cin>>h>>w;
    bool ok;
    int sum=0;
    vector <vector <char>> a(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }
    for(int h1=0;h1<h;h1++){
        for(int h2=h1+1;h2<=h;h2++){
            for(int w1=0;w1<w;w1++){
                for(int w2=w1+1;w2<=w;w2++){
                    //ここがチェックのところ
                    ok=true;
                    for(int i=h1;i<h2;i++){
                        for(int j=w1;j<w2;j++){
                            if(a[i][j]!=a[h1+h2-1-i][w1+w2-1-j]){
                                ok=false;
                            }
                        }
                    }
                    if(ok){
                        sum++;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
}