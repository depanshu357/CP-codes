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
    ll coins ;cin>>coins;
    vector<ll>preSum(n),sufSum(n);
    preSum[0]=arr[0];
    for(ll i=1;i<n;i++) preSum[i] = preSum[i-1] + arr[i];
    sufSum[n-1]=arr[n-1];
    for(ll i=n-2;i>=0;i--) sufSum[i] = sufSum[i+1] + arr[i];
    ll l = 1, r= n;
    ll ans =1e9+7;
    while(r>=l){
        ll mid = l + (r-l)/2;
        ll help = 0;
        for(ll i=0;i<n-mid+1;i++){
            ll sum =  preSum[i+mid-1] - preSum[i] + arr[i];
            if(sum >= coins){
                ans = min(ans,mid);
                r = mid-1;
                help = sum;
                break;
            }
        }
        if(!help) l = mid+1; 
    }
    if(ans == ll(1e9 + 7))cout<<"-1"<<endl;
    else
    cout<<ans<<endl;
    return 0;
}