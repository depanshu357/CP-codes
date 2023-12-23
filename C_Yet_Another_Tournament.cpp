#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;cin>>n>>m;
    long long arr[n];
    long long win[n];
    for(long long i=0;i<n;i++)win[i]=0;
    for(long long i=0;i<n;i++)cin>>arr[i];
    // arr[n]=m;
    sort(arr,arr+n);
    long long sum=0;
    long long i=0;
    while(1){

        sum+=arr[i];
        if(sum>m ){sum-=arr[i-1 ];break;}
        i++;
    }

    long long wins = i;
    long long ans=1;
    sum=arr[0];
    win[0]=0;
    for(long long j=wins;i<n;i++){
        if(arr[j-1]==arr[j]){wins++;}
        else break;
    }
    for(long long i=0;i<n;i++){
        if(arr[i]==m && m!=0)wins++;
    }
    ans = n - wins +1;
    if(ans==0)ans++;
    cout<<ans<<endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--)solve();
}