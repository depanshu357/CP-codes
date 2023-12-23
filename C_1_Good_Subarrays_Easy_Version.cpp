#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long goodarr[n];
    goodarr[0]=1;
    long long count=1;
    for(long long i=1;i<n;i++){
        goodarr[i]=min(goodarr[i-1]+1,arr[i]);
        count+=goodarr[i];
    }
    cout<<count<<endl;

}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}