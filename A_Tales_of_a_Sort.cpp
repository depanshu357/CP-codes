#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll flag =0;
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1]){flag = 1;break;}
    }
    if(!flag){cout<<"0\n";return;}
    ll maxi = arr[0];
    ll ans = maxi;
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1]) ans = maxi;
        maxi = max(maxi,arr[i]);
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