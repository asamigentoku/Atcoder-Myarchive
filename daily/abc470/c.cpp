#include <iostream>
#include <vector>
using namespace std;
using ll=long long;

int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n+1,0);
    //それぞれの桁ごとに
    //
    int t;
    int x_or=0;
    int index;
    //サイズは予想できないため
    vector<int> index_list;
    for(int i=0;i<q;i++){
        cin>>t;
        if(t==1){
            cin>>index;
            if(a[index]==0){
                index_list.push_back(index);
                //更新した場合はXORを更新する
                //XORは yy=1で元に戻るので
                //既存のものをかけるのは打ち消し合うため
            }
            x_or^=a[index]^a[index]+1;
            a[index]+=1;
        }else if(t==2){
            vector<int> next_index_list;
            //0,1のインデックスを保存して計算量を削減
            //ここで全部判定してたらTLE
            for(int i=0;i<index_list.size();i++){
                if(a[index_list[i]]>=1){
                    // x_or=x_or^a[index_list[i]];
                    x_or^=a[index_list[i]]^a[index_list[i]]-1;
                    a[index_list[i]]-=1;
                    if(a[index_list[i]]>=1){
                        next_index_list.push_back(index_list[i]);
                    }
                }
            }
            //配列をコピー
            index_list=move(next_index_list);
            next_index_list.clear();
        }
        cout<<x_or<<endl;
    }
}