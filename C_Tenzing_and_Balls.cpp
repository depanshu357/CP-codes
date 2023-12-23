#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int findComb(vector<int> &arr,int index,int prevIndex,vector<vector<int>> &dp){
    if(index == arr.size()) return 0;
    if(dp[index][prevIndex] != -1) return dp[index][prevIndex];
    int num = arr[index];
    int take = 0;
    if(prevIndex != index && arr[prevIndex] == arr[index]) take = index - prevIndex + 1 + findComb(arr,index+1,index+1,dp);
    int notTake = 0 + findComb(arr,index+1,prevIndex,dp);
    int changePrev = findComb(arr,index+1,index,dp);
    return dp[index][prevIndex] =  max(take,max(notTake,changePrev));
}
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    vector<int> pos(n+1,-1); 
    vector<int> maxPos(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(pos[arr[i]]==-1) pos[arr[i]] = i;
        maxPos[arr[i]] = max(maxPos[arr[i]],i);
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    // vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    for(int i=0;i<n;i++) dp[i][i] = 0;
    int maxi = 0;
    for(int index=n-1;index>=0;index--){
        for(int prevIndex=index-1;prevIndex>=0;prevIndex--){
            int take = 0;
            if(prevIndex != index && arr[prevIndex] == arr[index]) take = index - prevIndex + 1 + dp[index+1][index+1];
            int notTake = 0 + dp[index+1][prevIndex];
            int changePrev = dp[index+1][index];
            dp[index][prevIndex] =  max(take,max(notTake,changePrev));
            maxi = max(dp[index][prevIndex],maxi);
        }
    }
    for(int i=0;i<n;i++) cout<<dp[1][i]<<" ";
    // int ans = findComb(arr,0,0,dp);
    int ans = dp[1][0];
    // cout<<ans<<'\n';
    cout<<maxi<<'\n';
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}