#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v = {1,3,6,10,15,21,28,36,45,55};
    ll ans = 1;
    while(n){
        ll temp = n%10;n/=10;
        ans *= v[temp];
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