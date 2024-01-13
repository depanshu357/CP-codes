#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    ll j = 0;
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum += v[i];
    }
    sort(v.begin(),v.end());
    ll k = 0;
    for(ll i=0;i<n;i++){
        k += v[i];
        if(k > (sum+1)/2) break;
        j++;
    }
    cout<< (sum+1)/2 + n - j <<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}