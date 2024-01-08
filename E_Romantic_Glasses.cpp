#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    map<ll,ll> mp;
    ll sum  = 0;
    mp[sum]++;
    for(ll i=0;i<n;i++){
        if(i%2) sum += v[i];
        else sum += -v[i];
        mp[sum]++;
        if(mp[sum]==2){cout<<"YES\n";return;}
    }
    cout<<"NO\n";return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}