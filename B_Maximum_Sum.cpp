#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    vector<ll> preSum(n);
    preSum[0]=arr[0];
    for(int i=1;i<n;i++){
        preSum[i]=preSum[i-1]+arr[i];
        // cout<<preSum[i]<<" ";
    }
    int i = 0,j=n-1;
    long long ans = -1;
    for(int t=0;t<=k;t++){
        if(i==n-1) {cout<<0<<endl;break;}
        if(j==0){cout<<0<<endl;break;}
        if(j-t>=0 && i+2*(k-t)<=n-1)
        ans = max(ans,preSum[j-t]-preSum[i+2*(k-t)]+arr[i+2*(k-t)]);
        // cout<<preSum[j-t]-preSum[i+2*(k-t)]+arr[i]<<" "<<j-t<<" "<<i+2*(k-t)<<" ";
        // cout<<arr[i]<<" ";
    }
    long long sum = preSum[j] - preSum[i] + arr[i];
    // cout<<sum<<endl;
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}