#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr+1,arr+n);
    for(int i=1;i<n;i++){
        int count=0;
        if(arr[i]<=arr[0])continue;
        count+=((arr[i]-arr[0])/2);
        if((arr[i]-arr[0])%2){count++;}
        arr[0]+=count;
    }
    cout<<arr[0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}