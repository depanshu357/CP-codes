#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll count = 0;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(a>b) count++;
    }
    cout<<count<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}