#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++){cin>>v[i].first>>v[i].second;}
    ll l=0,r=INT_MAX;
    ll ans =0;
    while(l<=r){
        ll mid = l + (r-l)/2;
        pair<ll,ll> range,reached;
        ans = mid;
        range.first = 0,range.second=mid;
        for(ll i=0;i<n;i++){
            ll li=v[i].first,ri=v[i].second;
            if(li>range.second){
                l=mid+1;break;
            }else if(range.first>ri){
                l=mid+1;break;
            }else{
                range.second = min(range.second,ri);
                range.first = max(range.first,li);
            }
            range.first = max((ll)0,range.first - mid);
            range.second = range.second + mid;
        }
            // cout<<range.first<<" "<<range.second<<'\n';
        if(l!=mid+1)r=mid-1;
    }
    cout<<l<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}