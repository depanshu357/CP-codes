#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]) flag++;
    }
    if(flag ==0){
        cout<<"NO"<<endl;
        return;
    }
    if(flag==n){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"YES"<<endl;    

}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}