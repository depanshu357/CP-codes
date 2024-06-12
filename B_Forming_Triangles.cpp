#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<ll> count(n+1,0);
    for(ll i=0;i<n;i++) count[v[i]]++;
    ll sum = 0;
    ll temp = 0;
    for(ll i=0;i<=n;i++){
        if(count[i])
         sum += (((count[i])*(count[i]-1)*(count[i]-2))/6) + (((count[i])*(count[i]-1))/2)*(temp);
        temp += count[i];
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