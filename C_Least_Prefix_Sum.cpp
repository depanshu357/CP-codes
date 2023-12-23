#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin>>n>>m;
    priority_queue <pair<long long,long long>> q;
    long long arr[n+1];
    long long ans=0;
    for(long long i=1;i<=n;i++)cin>>arr[i];
    if(arr[m]>0 && m!=1){arr[m]=-arr[m];ans++;}
    long long preSum[n+1],preSum1[n+1];
    preSum[1]=preSum1[1]=arr[1];

    for(long long i=2;i<=n;i++) {preSum[i]=preSum[i-1]+arr[i];preSum1[i]=preSum[i];}
    for(long long i= m-1;i>=1;i--){
        while(preSum[i]<preSum[m]){
            preSum[m]=preSum[m]-(2*(q.top().first));ans++;
            q.pop();    
        }
            if(arr[i]>0){q.push({arr[i],i});}
    }
    while(!(q.empty())){q.pop();}

    for(long long i=m+1;i<=n;i++){
        if(arr[i]<0)q.push({-arr[i],i});
        while(preSum1[i]<preSum1[m]){
            preSum1[m]=preSum1[m]-(2*(q.top().first));ans++;
            q.pop();
        }
    }
    cout<<ans<<endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--)
    solve();
}