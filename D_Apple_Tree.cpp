#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll dfs(ll node,vector<vector<ll>> &adj,vector<ll> &vis,vector<ll> &possibilities){
    vis[node] = 1;
    ll sum = 0;
    for(auto it: adj[node]){
        if(!vis[it]){
            sum += dfs(it,adj,vis,possibilities);
        }
    }
    if(sum ==0)sum = 1;
    // cout<<sum<<" ";
    return possibilities[node] = sum;
}
void solve(){
    ll n;cin>>n;
    vector<vector<ll>> adj(n+1);
    vector<ll> possibilities(n+1);
    for(ll i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        // cout<<adj[a][0]<<" "<<adj[b][0];
    }
    // cout<<adj[5][0]<<" ";
    vector<ll> vis(n+1,0);
    dfs(1,adj,vis,possibilities);
    ll q;cin>>q;
    for(ll i=0;i<q;i++){
        // cout<<possibilities[i];
        ll q1,q2;
        cin>>q1>>q2;
        ll ans  = possibilities[q1]*possibilities[q2];
        cout<<ans<<'\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}