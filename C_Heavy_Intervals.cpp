#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> l(n),r(n),c(n);
    for(ll i=0;i<n;i++) cin>>l[i];sort(l.begin(),l.end());
    for(ll i=0;i<n;i++) cin>>r[i];sort(r.begin(),r.end());
    for(ll i=0;i<n;i++) cin>>c[i];
    vector<ll> diff(n);ll t=0;
    vector<ll> ea(n+1);ll prev = 0;
    ll j=0;
    for(ll i=0;i<n;i++){
        while(j<n && r[j]<l[i]){
            diff[t++] = r[j]-ea[--prev];j++;
        }
        ea[prev++] = l[i];
    }
    while(j<n){
        diff[t++] = r[j] - ea[--prev];j++;
    }
    sort(c.begin(),c.end(),greater<ll>());
    sort(diff.begin(),diff.end());
    ll ans = 0;
    for(ll i=0;i<n;i++){
        ans += c[i]*diff[i];
    }
    cout<<ans<<'\n';
    
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}