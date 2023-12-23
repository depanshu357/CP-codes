#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a,b,c,k;
    cin>>a>>b>>c>>k;
    if(max(a,b) > c){
        cout<<"-1\n";return;
    }
    if(c - max(a,b) > 1){
        cout<<"-1\n";return;
    }
    ll n1 = pow(10,a);
    ll n2 = pow(10,c) - n1;
    ll l = n2;ll r = pow(10,c) - 1;
    while(r>=l){
        ll mid = l + (r-l)/2;
        ll steps = ((n2 + mid)*(n2 - mid + 1))/2;
        if(steps >= k) r = mid -1;
        else l = mid+1;
    }
    cout<<l<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}