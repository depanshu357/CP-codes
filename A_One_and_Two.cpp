#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    ll arr[n];
    vector<ll> noOf2s(n,0);
    for(ll i=0;i<n;i++)cin>>arr[i];
    if(arr[0]==2) noOf2s[0]=1;
    for(ll i=1;i<n;i++){
        if(arr[i]==2){noOf2s[i]=noOf2s[i-1]+1;}
        else {noOf2s[i]=noOf2s[i-1];}
        // cout<<noOf2s[i]<<" ";
    }
    if(noOf2s[n-1]%2 ==1){cout<<"-1"<<endl;return;}
    for(ll i=0;i<n-1;i++){
        ll x = noOf2s[i];
        ll y = noOf2s[n-1] - noOf2s[i];
        if(x==y){cout<<i+1<<endl;return;}
    }
    cout<<"-1\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}