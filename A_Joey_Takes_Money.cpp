#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;long long arr[n];
    for(long long i=0;i<n;i++)cin>>arr[i];
    long long ans =1;
    for(long long i=0;i<n;i++)ans*=arr[i];
    ans+=(n-1);
    cout<<2022*ans<<endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}