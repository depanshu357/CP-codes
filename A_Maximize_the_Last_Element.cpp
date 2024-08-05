#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int maxi = v[0];
    for(int i=0;i<n;i++){
        if(i%2 && (n-i-1)%2) continue;
        maxi = max(maxi,v[i]);
    }
    cout<<maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}