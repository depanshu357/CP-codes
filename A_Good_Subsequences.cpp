#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
ll mod = 1000000007;
ll findComb(string s,vector<ll> &arr,ll index,ll index2,vector<vector<ll>> &dp){
    if(index == arr.size()) return 1;
    if(index2 == s.size()) return 0;
    if(dp[index2][index]!=-1) return dp[index2][index];
    ll count1 = 0;
    if(s[index2] - '0' == arr[index]){
        count1 = findComb(s,arr,index+1,index2+1,dp);
    }
    ll count2 = findComb(s,arr,index,index2 + 1,dp);
    return dp[index2][index] =  (count1 + count2)%mod;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    // ll index = 0;
    // ll index2 =0;
    // vector<vector<ll>> dp(s.size(),vector<ll>(arr.size(),-1));
    // cout<<findComb(s,arr,index,index2,dp);
    // ll i=0;
    // ll j =0;
    ll ans = 1;
    if(n==0) {cout<<"1";return 0;}
    vector<ll> counter(10,0);
    for(ll i=0;i<s.size();i++){
        counter[s[i]-'0']++;
    }
    for(int i=0;i<n;i++) ans = (ans*counter[arr[i]])%mod;
    cout<<ans;
    return 0;
}