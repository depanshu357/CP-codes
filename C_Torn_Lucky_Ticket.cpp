#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    map<pair<ll,ll>,ll> mp;
    vector<ll> stringSum(n,0);
    ll ans = 0;
    for(ll i=0;i<n;i++){
        ll sum = 0;
        for(auto c : v[i]) sum+= (c-'0');
        stringSum[i] = sum;
        mp[{v[i].size(),sum}]++;
    }
    // for(auto it: mp){
    //     cout<< it.first.first<< " "<<it.first.second<<" "<<it.second<<": ";
    // }
    for(ll i=0;i<n;i++){
        ll sum = 0;
        for(ll j=0;j<v[i].size();j++){
            sum += v[i][j] - '0';
            ll len = v[i].size();
            if(mp.count({2*(j+1)-len,2*sum - stringSum[i]})){
                ans += mp[{2*(j+1)-len,2*sum - stringSum[i]}];
                // cout<<v[i]<<" "<<j+1;
            }
        }
    }
    // for(ll i=0;i<n;i++){
    //     reverse(v[i].begin(),v[i].end());
    // }
    for(ll i=n-1;i>=0;i--){
        ll sum = 0;
        ll len = v[i].size();
        for(ll j=len-1;j>0;j--){
            sum += v[i][j] - '0';
            if(mp.count({len-2*j,2*sum - stringSum[i]})){
                ans += mp[{len-2*j,2*sum - stringSum[i]}];
                // cout<<v[i]<<" "<<len-j<<" "<<sum<<": ";
            }
        }
    }
    cout<<ans<<'\n';
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}