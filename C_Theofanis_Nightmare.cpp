#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    ll sum =0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+= v[i];
    }
    ll index = 1;
    ll ans = 0;
    for(ll i=0;i<n;i++){
        ans += index*v[i];
        sum = sum-v[i];
        if(sum>=0){
            index+=1;
        }
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