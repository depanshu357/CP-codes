#include<bits/stdc++.h>
using namespace std;
int dfs(int node, vector<vector<int>> &adj, vector<int> &v){
    if(adj[node].size()==0) return v[node-1];
    int mini = INT_MAX;
    int sum = 0;
    for(auto i:adj[node]){
        mini = min(mini,dfs(i,adj,v));
    }
    // cout<<node<<"->";
    // cout<<(mini + v[node-1])/2<<" ";
    if(node==1) return mini + v[node-1];
    if(v[node-1] <= mini) return (mini + v[node-1])/2;
    else return mini;
}
bool dfs_prj(int node, vector<vector<int>> &adj, long long curr, vector<long long> &v){
    if(adj[node].size()==0) return v[node-1]>=curr;
    if(curr>1e9) return false;
    if(node==1)
    {
        curr=max(0ll,curr-v[0]);
    }
    else if(v[node-1]<curr)
    curr+=(curr-v[node-1]);
    for(auto i:adj[node]){
        if(!dfs_prj(i,adj,curr,v)) return false;
    }
    return true;
}

void solve(){
    int n;cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>> adj(n+1);
    for(int i=2;i<=n;i++){
        int k;cin>>k;
        adj[k].push_back(i);
    }
    // cout<<dfs(1,adj,v)<<endl;
    int low=v[0];int high=1e9;
    int ans=v[0];
    while(low<=high){
        int mid = low+(high-low)/2;
        if(dfs_prj(1,adj,mid,v)) {
            ans=max(ans,mid);
            low = mid+1;
        }
        else high = mid-1;
    }
    cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}