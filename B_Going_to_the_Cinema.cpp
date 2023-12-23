#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int ans=0;
    int people=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==0){people++;}
        if(arr[i]<=i){if(i+1>=arr[i+1])continue;
        else ans++;}
    }
    if(n-1>=arr[n-1])ans++;
    if(arr[0]!=0)ans++;
    cout<<ans<<endl;
}

int main(){
    int t;cin>>t;
    while(t--)solve();
}