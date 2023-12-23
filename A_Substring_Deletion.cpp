#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int mod = 1e9 + 7;
void solve(){
    string s;
    cin>>s;
    int n  = s.length();
    map<char,ll> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    long long ans = 1;
    for(auto it = mp.begin();it != mp.end();it++){
        ans = ( ans * ((it->second)%mod))%mod;
    }
    cout<<ans<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}