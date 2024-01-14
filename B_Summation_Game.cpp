#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    vector<ll> preSum(n+1,0), sufSum(n+1,0);
    for(ll i=1;i<=n;i++){
        preSum[i] = v[i-1];
        if(i) preSum[i] += preSum[i-1];
    }
    for(ll i=n-1;i>=0;i--){
        sufSum[i] = v[i];
        if(i!=n-1) sufSum[i] += sufSum[i+1];
    }
    ll total = preSum[n];
    ll ans= INT_MIN;
    for(ll i=0;i<=k;i++){
        ll temp = total ;
        temp -= sufSum[n-i];
        temp -= (2*(preSum[n-i] - preSum[max((ll)0,n-i-x)]));
        // cout<<sufSum[n-i]<<" "<<preSum[n-i] - preSum[max(0,n-i-x)]<<" "<<temp<<": ";
        ans = max(ans,temp);
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