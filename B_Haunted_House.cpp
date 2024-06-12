#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll currp =0, zerop = 0;
    ll n;cin>>n;
    string s;cin>>s;
    reverse(s.begin(),s.end());
    ll sum = 0;ll ones = 0;
    vector<ll> ans;
    // while(s[zerop]!='0' || zerop ==n) {if(s[zerop]=='1') ones++;zerop++; }
    for(ll i=0;i<n;i++){
        currp = i;
        while(zerop < n && s[zerop]!='0') { if(s[zerop]=='1') ones++;zerop++;}
        sum += ones;
        if(zerop>=n){ans.push_back(-1);}
        else ans.push_back(sum);
        zerop++;
    }
    for(ll i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}