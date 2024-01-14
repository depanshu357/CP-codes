#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll mod = 998244353;
ll binary_exp(ll n){
    if(n==0) return 1;
    if(n==1) return 2;
    if(n%2) return (((binary_exp(n/2)*binary_exp(n/2))%mod)*2)%mod;
    else return (binary_exp(n/2)*binary_exp(n/2))%mod;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    map<ll,ll> mp;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j*j<=i;j++){
            if(i%j==0){v[j] = max(v[j],v[i]);v[i/j] = max(v[i/j],v[i]);}
        }
    }
    for(ll i=1;i<=n;i++) mp[v[i]]++;
    ll freq = n;
    ll ans = 0;
    for(auto it = mp.rbegin();it!=mp.rend();it++){
        freq -= (*it).second;
        ans += ((((binary_exp((*it).second) - 1)*(binary_exp(freq)))%mod)*((*it).first))%mod;
        ans %= mod;
        // cout<<((((binary_exp((*it).second) - 1)*(binary_exp(freq)))%mod)*((*it).first))%mod<<" ";
    }
    cout<<ans<<'\n';

}