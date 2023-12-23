#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> v;
    ll sum =0;
    for(ll i=1;i<arr.size();i++){
        v.push_back(abs(arr[i]-arr[i-1]));
        sum += abs(arr[i] - arr[i-1]);
    }
    sort(v.begin(),v.end(),greater<ll>());
    k = k-1;
    for(ll i=0;i<k && i<v.size();i++) sum -= v[i];
    cout<<sum<<'\n';
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}