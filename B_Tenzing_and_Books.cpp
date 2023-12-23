#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n,x;
    cin>>n>>x;
    queue<ll> st[3];
    vector<int> arr(n);
    ll temp = 0;
    for(ll j=0;j<3;j++){
        for(ll i=0;i<n;i++) cin>>arr[i];
        for(ll i=0;i<n;i++){
            if((arr[i]|x) == x) temp = temp | arr[i];
            else break;
        }
    }
    
    if(temp == x) cout<<"Yes\n";
    else cout<<"No\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}