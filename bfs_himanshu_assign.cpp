#include<iostream>
using namespace std;
const int N = 100;
const int M = 100;
int adj[N][M];
void solve(){
    int query;cin>>query;

}
void dfs(int visited[],int query,int n,int depth){
    visited[query] = depth;

    for(int i=1;i<n;i++){
        if(adj[query][i] && !visited[i]){
            dfs(visited,i,n,depth+1);
        }
    }
}
int main(){
    int n;cin>>n;
    int v[n];
    for(int i=0;i<N;i++) for(int j=0;j<M;j++) adj[i][j] = 0;
    for(int i=1;i<=n;i++) {
        cin>>v[i];
        adj[v[i]][i] = 1;
        adj[i][v[i]] = 1;
    }
    int f;cin>>f;
    int fr_pos[n+1] = {0};
    for(int i=0;i<f;i++) {int temp;cin>>temp;fr_pos[temp] = 1;}
    int q;cin>>q;
    while(q--){
        int query;cin>>query;
        int visited[n+1] = {0};

        dfs(visited,query,n+1,0);
        int vertex =1 , dist = INT_MAX;
        for(int i=1;i<=n;i++){
            if(visited[i] < dist && fr_pos[i]){
                dist = visited[i];
                vertex = i;
            }else if(visited[i] == dist && fr_pos[i] && i<vertex){
            vertex = i;
        }
        }
        cout<<vertex<<endl;
        
    }
}