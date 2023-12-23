#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vector<vector<ll>> v(n,vector<ll>(3,0));
    
    for(ll i=0;i<n;i++){
        for(ll j=0;j<3;j++){
            cin>>v[i][j];
            // cout<<v[i][j]<<" ";
        }
        // cout<<endl;
    }
    vector<vector<ll>> dp(n,vector<ll>(3,0));
        dp[0][0] = v[0][0];
        dp[0][1] = v[0][1];
        dp[0][2] = v[0][2];
    for(ll i=1;i<n;i++){
        dp[i][0] = min(dp[i-1][2] + v[i][0],dp[i-1][1] + v[i][0]);
        dp[i][1] = min(dp[i-1][2] + v[i][1],dp[i-1][0] + v[i][1]);
        dp[i][2] = min(dp[i-1][0] + v[i][2],dp[i-1][1] + v[i][2]);
    }
    cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]))<<'\n';
}