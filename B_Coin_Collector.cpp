#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll x;cin>>x;
    vector<ll> dp(n,0);
    ll max_odd = 0,max_even=0;
    if(arr[0])
    //  max_odd = arr[0];
    //  max_even = arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2){
            dp[i] = (max_even - x,max_odd) + arr[i];
            max_odd = max(max_odd,dp[i]);
        }else {
            dp[i] = (max_odd-x,max_even) + arr[i];
            max_even = max(max_even,dp[i]);
        }
    }
    cout<< dp[n-1]<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}