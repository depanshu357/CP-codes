#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) if(a[i]>b[i]) swap(a[i],b[i]);
    ll maxi = 0,mini =  INT_MAX;
    for(int i=0;i<n;i++){
        maxi = max(maxi,a[i]);
        mini = min(mini,b[i]);
    }
    ll sum = 0;
    for(int i=0;i<n;i++) sum += abs(a[i]-b[i]);
    sum += max((ll)0,2*(maxi-mini));
    cout<<sum<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}