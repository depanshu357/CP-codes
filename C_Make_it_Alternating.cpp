#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll mod = 998244353;
ll fact(ll n){
    if(n==0) return 1;
    ll temp = 1;
    while(n){
        temp = (temp*n)%mod;
        n--;
    }
    return temp;
}
void solve(){
    string s;cin>>s;
    ll op = 0;
    for(ll i=1;i<s.size();i++){
        if(s[i]==s[i-1]) {;op++;}
    }
    ll count = 1;
    ll ans = 1;
    cout<<op<<" ";
    for(ll i=1;i<s.size();i++){
        if(s[i]==s[i-1])count++;
        else{ ans = (ans*count)%mod;count=1;}
    }
    ans = (ans*count)%mod;
    ans = (ans*fact(op))%mod;
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}