#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin>>s;
    map<char,int> mp;
    int count = 0;
    for(int i=0;i<(s.size())/2;i++){
        if(mp.find(s[i])==mp.end()) count++;
        mp[s[i]]++;
        // cout<<count<<" ";
    }
    if(count>=2) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}