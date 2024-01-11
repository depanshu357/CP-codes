#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ans = 2;
    while(1){
        set<ll> st;
        for(ll i=0;i<n;i++){
            st.insert(v[i]%ans);
        }
        if(st.size()==2){cout<<ans<<'\n';return;}
        ans*=2;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}