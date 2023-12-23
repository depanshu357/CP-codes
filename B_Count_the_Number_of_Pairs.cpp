#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    // sort(s.begin(),s.end());
    // cout<<s<<" ";
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        int countS =0,countL =0;
        if(mp.find(i+'a')!=mp.end()){
        countS = mp[i+'a'];
        // cout<< mp[i + 'a'] <<" ";
        }
        if(mp.find(i+'A')!=mp.end()){
        countL = mp[i+'A'];
        // cout<< mp[i + 'a'] << " ";
        }
        int diff = min(countL,countS);
        ans += diff;
        int x = max(countL - diff,countS - diff);
        // cout<<x<<"X";
        if(k >= x/2) {k-=(x/2);ans+=(x/2);}
        else {ans+=k;k=0;}
        
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}