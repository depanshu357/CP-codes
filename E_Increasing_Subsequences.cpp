#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll x;cin>>x;
    if(x==2){
        cout<<"1\n0\n";
        return;
    }
    ll curr = 2;
    vector<ll> v = {1};
    while(curr*2 <= x){
        v.push_back(v.back()+1);
        curr <<= 1;
    }
    if(curr != x){
        curr = x - curr;
        for(ll i=63;i>=0;i--){
            if(curr & (1LL<<i)){
                v.push_back(i+1);
            }
        }
    }
    cout<<v.size()<<'\n';
    for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}