#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    ll sum = 0;
    for(ll i=0;i<n;i++){cin>>v[i];sum+=v[i];}
    if((2*sum)%n != 0){cout<<"0\n";return;}
    ll avg = (2*sum)/n;
    // set<ll> st;
    map<ll,ll> mp;
    ll ans = 0;
    for(ll i=0;i<n;i++){
        if(mp.find(avg - v[i])!=mp.end()){
            ans += mp[avg-v[i]];
        }
        mp[v[i]]++;
    }
    // for(auto it: mp){
    //     if(mp.find(avg - it.first)!=mp.end()){
    //         ans += mp[avg - it.first];
    //     }
    // }
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}