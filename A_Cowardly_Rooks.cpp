#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    int arr[m][2];
    for(int i=0;i<m;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    if(m==n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}