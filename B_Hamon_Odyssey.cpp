#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
pair<ll,ll> findComb(ll index,vector<ll> &arr,vector<pair<ll,ll>> &dp){
    if(index == arr.size()) return {0,0};
    ll num = 0;
    ll mini = 1e8;
    ll groups = 0;
    num = arr[index];
    if(dp[index].first !=-1) return dp[index];
    for(ll i=index;i<arr.size();i++){
        num  = num & arr[i];
        // mini = min(num + findComb(i+1,arr).first,mini);
        auto temp = findComb(i+1,arr,dp);
        if(mini > temp.first + num){
            mini  = temp.first + num;
            groups = temp.second + 1;
        }
    }
    return dp[index] =  {mini,groups};
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll temp = arr[0];
    ll count  = 1;
    for(ll i=1;i<n;i++){
        if(temp == 0){
            count++;
            temp = arr[i];
        } 
        else {
            temp = (temp & arr[i]);
        }
        // cout<<temp<<" ";
    }
    if(temp != 0 && count >1) count--;
    cout<<count<<'\n';
    // cout<< (5 & 7 & 12 & 6)<<"k";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}