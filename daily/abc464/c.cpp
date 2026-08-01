#include <iostream>
#include <vector>
#include <map>

#include <set>
using namespace std;
using pi=pair<int,int>;

int main(){
    long long n,m;
    cin>>n>>m;
    vector<vector<pi>> change(m+1);
    vector<long long> a(n);
    vector<long long> d(n);
    vector<long long> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>d[i]>>b[i];
        change[d[i]].push_back({(int)a[i],(int)b[i]});
    }
    //d[i]日目に色がb[i]に変化する
    //時間計算量は O(N+M)で解けるらしい
    //差分更新
    //setで種類も決める
    

    // vector<vector<pair<long long,long long>>> color_change(m+1);
    long long kind = 0;
    map<long long,int> cnt;
    for(int i=0;i<n;i++){
        //新しい数が出てきた場合は種類を追加する
        if(cnt[a[i]]==0){
            kind++;
        }
        cnt[a[i]]++;
    }
    
    for(int day=1;day<=m;day++){
        //ここで配列から取り出すことで
        //dayに対して直s
        for(auto &nx : change[day]){
            cnt[nx.first]--;
            if(cnt[nx.first]==0){kind--;}
            if(cnt[nx.second]==0){kind++;}
            cnt[nx.second]++;
        }
        cout<<kind<<endl;
    }
}