#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    vector<pair<ll,ll>> v(n);
    ll sum = 0;
    for(ll i=0;i<n;i++){
        v[i] = {a[i]+b[i],i};
        sum += (-b[i]+1);
    }
    sort(v.begin(),v.end(),greater<pair<ll,ll>>());
    for(ll i=0;i<n;i++){
        if(i%2==0){
            sum+=(v[i].first-2);
        }
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