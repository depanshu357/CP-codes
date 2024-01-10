#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int dfs(vector<int> &par,vector<int> &lChild,vector<int> &rChild,int x,int n,string &s){
    // cout<<x<<" ";
        // cout<<x<<"->("<<lChild[x]<<","<<rChild[x]<<") ";
    if(x==0) return 1e8;
    if(lChild[x]==0 && rChild[x]==0) return 0;
    if(s[x-1]=='U') return 1 + min(dfs(par,lChild,rChild,lChild[x],n,s),dfs(par,lChild,rChild,rChild[x],n,s));
    if(s[x-1]=='L') return min(dfs(par,lChild,rChild,lChild[x],n,s),1 + dfs(par,lChild,rChild,rChild[x],n,s));
    if(s[x-1]=='R') return min(1 + dfs(par,lChild,rChild,lChild[x],n,s),dfs(par,lChild,rChild,rChild[x],n,s));
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int> par(n+1);
    vector<int> lChild(n+1,0);
    vector<int> rChild(n+1,0);
    par[1] = 1;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        par[a] = par[b] = i+1;
        lChild[i+1] = a;
        rChild[i+1] = b; 
        // cout<<i+1<<"->("<<lChild[i+1]<<","<<rChild[i+1]<<") ";
    }
    int ans = dfs(par,lChild,rChild,1,n,s);
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}