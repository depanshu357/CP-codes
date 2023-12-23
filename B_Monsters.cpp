#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    vector<pair<ll,ll>> ans;
    for(ll i=0;i<n;i++){
        int temp  = arr[i]%k;
        if(temp==0) temp = k;
        ans.push_back({temp,-(i+1)});
    }
    sort(ans.begin(),ans.end(),greater<pair<ll,ll>>());
    for(ll i=0;i<n;i++) cout<<-ans[i].second<<" ";
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}