#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    ll money ;cin>>money;
    vector<ll> preSum(n);
    preSum[0]=arr[0];
    for(ll i=1;i<n;i++){
        preSum[i] = preSum[i-1] + arr[i];
    }
    // ll i=0,j=n-1;
    int ans = 0;
    ll totalMoney = preSum[n-1];
    for(int i=0;i<n;i++){
        int moneyRequired =  money ;
        if(i>0) moneyRequired += preSum[i-1];
        int j = upper_bound(preSum.begin(),preSum.end(),moneyRequired) - preSum.begin();
        // cout<<i<<" "<<j<<" ";
        // if(j==n-1)j++;
        ans = max(ans,j-i);
    }
    cout<<ans<<"\n";
}