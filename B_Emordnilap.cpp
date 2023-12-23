#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    ll MODULAR = 1e9 + 7;
    ll ans =n;
    for(ll i=1;i<n;i++){
        ans = ((ans*(n-i))%MODULAR);
    }
    ans = ((ans*n)%MODULAR);
    ans = (ans*(n-1)%MODULAR);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}