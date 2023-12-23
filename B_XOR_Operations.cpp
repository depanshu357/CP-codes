#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    vector<vector<ll>> dp(n,vector<ll>(30,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<30;j++){
            if((arr[i]>>j) & 1){
                dp[i][j] = 1;
            }
        }
    }
    for(ll i=1;i<n;i++){
        for(ll j=0;j<30;j++){
            dp[i][j] += dp[i-1][j];
        }
    }
    ll q;cin>>q;
    while(q--){
        ll l,r;cin>>l>>r;
        ll min_operations =0;
        for(ll j=0;j<30;j++){
            ll ones_count  = dp[r][j];
            if(l>0) ones_count -= dp[l-1][j];
            ll zero_count = (r-l+1) - ones_count;
            min_operations += min(zero_count,ones_count);
        }
        cout<<min_operations<<' ';
    }
    cout<<'\n';
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}