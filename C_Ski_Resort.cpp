#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll count =0 ;
    ll sum =0 ;
    for(ll i=0;i<n;i++){
        if(q >= arr[i])count++;
        else count =0;
        if(count >= k)
        sum += (count-k+1);
    }
    cout<<sum<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}