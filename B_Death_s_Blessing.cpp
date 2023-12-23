#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long arr[n],brr[n];
    long long maxb=-1;
    long long  sum=0;
    for(long long i=0;i<n;i++){cin>>arr[i];sum+=arr[i];}
    for(long long i=0;i<n;i++){cin>>brr[i];if(maxb<brr[i])maxb=brr[i];sum+=brr[i];}
    sum-=maxb;
    cout<<sum<<endl;
    
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}