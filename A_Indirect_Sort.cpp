#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int min = n+1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(min>arr[i])min=arr[i];
    }
    if(min==arr[0])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}