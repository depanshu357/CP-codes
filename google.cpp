#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int dfs(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &arr,int paired){
    vis[node] = 1;
    int n = vis.size() - 1;
    int maxi = 0;
    for(auto it: adj[node]){
        if(!vis[it]){
            int choose =0,notChoose=0;
            if(!paired){
                choose = abs(arr[node-1] - arr[it-1]) + dfs(it,adj,vis,arr,1);
            }else{

            }
            if(paired){

                notChoose = dfs(it,adj,vis,arr,0);
            }else{

                notChoose = dfs(it,adj,vis,arr,0);
            }
            maxi = max({choose,notChoose,maxi});
        }
    }
    return maxi;
}
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,set<int>> mp;
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        mp[a].insert(b);
        mp[b].insert(a);
    }
    vector<vector<int>> adj(n+1);
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(mp[i].find(j)==mp[i].end()){
                adj[i].push_back(j);
            }
        }
    }
    vector<int> vis(n+1);
    int ans = dfs(1,adj,vis,arr,0);
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}