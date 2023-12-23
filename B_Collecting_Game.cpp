#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    map<ll,ll> mp;
    ll temp,c=false;
    sort(b.begin(),b.end());
    ll sum =0;
    for(ll i=0;i<n;i++) sum+= b[i];
    for(ll i=n-1;i>=0;i--){
        sum = sum - b[i];
        // cout<<sum<<" ";  
        if(c){
            mp[b[i]] = temp;
        }else{
            mp[b[i]] = i;
            temp = i;
        }
        if(sum>=b[i]) c = true;
        else c = false;
    }
    for(auto x: a){
        cout<<mp[x]<<" ";
    }
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}