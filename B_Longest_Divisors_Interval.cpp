#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll count =0 ;
    for(ll i=1;i<=n;i++){
        if(n%i==0) count++;
        else break;
    }
    cout<<count<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}