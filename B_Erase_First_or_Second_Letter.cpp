#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<vector<int>> v(n,vector<int>(26,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++) if(i) v[i][j] = v[i-1][j];
        v[i][s[i]-'a']++;

    }
    int ans = 0;
    for(int i=n;i>0;i--){
        int count =0;
        for(int j=0;j<26;j++){
            if(v[i-1][j])count++;
        }
        // cout<<count<<" ";
        ans += count;
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