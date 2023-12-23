#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll count1 = 0;
    ll extra = 0;
    for(ll i=0;i<n;i++){
        if(arr[i]==1) count1++;
        extra += (arr[i]-1);
    }
    // cout<<extra<<" "<<count1<<" ";
    if(n==1){cout<<"NO\n";return;}
        if(extra >= count1){cout<<"YES\n";return;}
        else{cout<<"NO\n";return;}
    cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}