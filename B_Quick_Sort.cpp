#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int check = 0;
    for(int i=0;i<n;i++){
        if((check+1)==arr[i])check++;
    }
    // cout<<check<<" ";
    int ans = (n-check)/k;
    if((n-check)%k)ans++;
    cout<<ans<<endl;
}
int  main(){
    int t;
    cin>>t;
    while(t--){solve();}
}