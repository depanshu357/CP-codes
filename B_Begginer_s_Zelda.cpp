#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void dfs(int v,int &count,vector<int> &vis,vector<vector<int>> &edges){
    vis[v] = 1;
    int temp =0;
    for(auto u:edges[v]){
        if(!vis[u]){temp++,dfs(u,count,vis,edges);}
    }
    count += max(0,temp-1);
    // cout<<"edge:"<<v<<"->"<<count<<' ';
}
void solve(){
    int n;cin>>n;
    vector<vector<int>> edges(n+1);
    vector<int> vis(n+1,0);
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    int count =0;
    for(int i=1;i<=n;i++){
        if(!vis[i] && edges[i].size()<=1){dfs(i,count,vis,edges);}
    }
    cout<<1 + count/2 + count%2<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}