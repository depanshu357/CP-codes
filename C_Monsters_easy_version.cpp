#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    ll minV = 2e5;
    long long ans;
    for(ll i=0;i<n;i++) {cin>>v[i];}
    ans =0;
    sort(v.begin(),v.end());
    ll consecutives = 1;
    ans += (v[0]-consecutives);
    for(ll i=1;i<n;i++){
        if(v[i]==v[i-1]){
            if(consecutives==v[i])continue;
        }
        consecutives++;
        ans += (v[i]-consecutives);

    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}