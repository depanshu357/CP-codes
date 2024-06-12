#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
const ll N = 1e5 + 10;
vector<vector<ll>> divi(N);
void solve(){
    vector<ll> tmp(N,0),cnt(N,0);
    ll n;cin>>n;
    vector<ll> arr(n);
    for(auto &e : arr) cin>>e;
    sort(arr.begin(),arr.end());
    ll ans = 0, rem = n;
    for(auto ele: arr){
        rem--;
        for(auto d: divi[ele]){
            ll val = cnt[d] - tmp[d]; 
            for(auto d2: divi[d]) tmp[d2] += val;
            // cout<<d<<" "<<val<<" "<<rem<<": ";
            ans += val*d*rem;
        }
        // cout<<ans<<" ";
        for(auto d: divi[ele])
            for(auto d2 : divi[d])
                tmp[d2] = 0;
        for(auto d: divi[ele]) cnt[d]++;
    }
    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(ll i=1;i<N;i++){
        for(ll j=i;j<N;j+=i){
            divi[j].push_back(i);
        }
    }
    for(ll i=1;i<N;i++) sort(divi[i].rbegin(),divi[i].rend());
    ll t;cin>>t;
    while(t--)solve();
}