#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll maxVal=1,ans=v[0]-1;;
    for(ll i=1;i<n;i++){
        ans += max(ll(0),v[i]-v[i-1]);
    }
    // ans += max(maxVal-1,0);
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}