#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll hcf(ll a,ll b){
    if(b==0) return a;
    return hcf(b,a%b);
}
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll prevHcf = 0;
    for(ll i=1;i<n;i++){
        ll diff = v[i] - v[i-1];
        prevHcf = hcf(diff,prevHcf);
    }
    ll ans = 0;
    if(prevHcf==0){cout<<"1\n";return;}
    // cout<<prevHcf<<'\n';
    for(ll i=0;i<n;i++){
        ans += (v[n-1] - v[i])/prevHcf;
    }
    ll mini = ans + n;
    for(ll i=n-1;i>=1;i--){
        if(v[i]-prevHcf != v[i-1]) mini = min(mini,ans+1+(v[n-1]-v[i])/prevHcf);
    }
    cout<<mini<<'\n';
    // cout<<"temp";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}