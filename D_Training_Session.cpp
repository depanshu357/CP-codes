#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    // map<ll,ll> a,b;
    vector<pair<ll,ll>> v(n); 
    vector<ll> a(n+1,0),b(n+1,0);
    for(ll i=0;i<n;i++){
        ll ai,bi;
        cin>>ai>>bi;
        v[i] = {ai,bi};
        a[ai]++;b[bi]++;
    }
    ll ans = (n*(n-1)*(n-2))/6;
    for(ll i=0;i<n;i++){
        ans -= (a[v[i].first]-1)*(b[v[i].second]-1);
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