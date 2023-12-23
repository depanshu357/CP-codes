#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<vector<pair<int,int>>> mp(n+1);
    vector<int> id(n+1);
    vector<int> dp(n+1,0);
    dp[1] = 1;
    queue<int> q;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        mp[a].push_back({b,i});
        mp[b].push_back({a,i});
    }
    q.push(1);
    while(!q.empty()){
        int size = q.size();
        while(size--){
            int node = q.front();
            q.pop();
            for(auto it: mp[node]){
                if(dp[it.first]==0){
                    q.push(it.first);
                    id[it.first] = it.second;
                    if(it.second < id[node]) dp[it.first] = 1 + dp[node] ;
                    else dp[it.first] = dp[node];
                }
            }
        }

    }
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,dp[i+1]);
    }
    cout<<maxi<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}