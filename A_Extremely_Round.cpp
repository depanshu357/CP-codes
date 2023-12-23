#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=0;
    int ans=0;
    while(n/10 !=0){
        ans+=9;
        n=n/10;
    }
    ans+=n;
    cout<<ans<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}