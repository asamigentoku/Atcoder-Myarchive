#include <iostream>
#include <vector>
using namespace std;

long long remove_result(vector <int> &a,int num){
    long long total_sum = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]==num){
            a[i]=0;
        }
        total_sum+=a[i];
    }
    return total_sum;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    

}