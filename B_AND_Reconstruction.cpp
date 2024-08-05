#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> b(n-1), a(n);
    for(int i=0;i<n-1;i++) cin>>b[i];
    a[n-1] = b[n-2];
    for(int i=n-2;i>=1;i--){
        a[i] = b[i] | b[i-1];
    }
    a[0] = b[0];
    for(int i=0;i<n-1;i++){
        if((a[i] & a[i+1]) != b[i]) {cout<<"-1 "<<endl;return;}
        else continue;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}