#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x;cin>>x;
    ll n;cin>>n;
    vector<int> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll temp = x;
    map<int,int> mp;
    for(ll i=0;i<x;i++){
        mp[arr[i]]++;
    }
    ll mini = mp.begin()->first;
    ll ans = mini;
    for( ll i = x;i<n;i++){
        if(mp[arr[i-x]]==1)mp.erase(arr[i-x]);
        else mp[arr[i-temp]]--;
        mp[arr[i]]++;
        mini = mp.begin()->first;
        ans = max(mini,ans);
    }
    cout<<ans<<'\n';
}