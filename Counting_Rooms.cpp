#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
vector<pair<int,int>> directions = {{-1,0},{1,0},{0,1},{0,-1}};
void dfs(int i,int j,vector<vector<char>> &arr,vector<vector<int>> &vis){
    vis[i][j] = 1;
    int n = arr.size();
    int m = arr[0].size();
    for(auto it: directions){
        int delrow = i + it.first;
        int delcol = j + it.second;
        if(delrow>=0 && delrow<n && delcol >=0 && delcol <m && !vis[delrow][delcol] && arr[delrow][delcol]!='#'){
            dfs(delrow,delcol,arr,vis);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
    vector<vector<int>> vis(n,vector<int>(m,0));
    int count =0 ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && arr[i][j]!='#'){
                dfs(i,j,arr,vis);
                count++;
            }
        }
    }
    cout<<count<<'\n';
}