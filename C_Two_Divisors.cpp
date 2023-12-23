#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int n = 1e6;
#define NUM 1e6;
vector<int> counti(n+1,0);
vector<int> prefix(n+1,0);
void sieve(){
    // counti[1] = 1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            counti[j]++;
        }
    }
    for(int i=1;i<=n;i++){
        int k = counti[i];
        while(k!=1){
            if(k%2!=0 || k==1) break;
            k/=2;
        }
        if(k==1){
            prefix[i] = 1;
        }else prefix[i] = 0;
    }
    for(int i=2;i<=n;i++){
        prefix[i] += prefix[i-1] ;
    }
    // for(int j=2;j<=1e6;j++){
    //     prefix[j] = prefix[j-1] + counti[j];
    // }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int q;cin>>q;
    while(q--){
        int a;cin>>a;
        cout<<prefix[a]<<' ';
    }
}