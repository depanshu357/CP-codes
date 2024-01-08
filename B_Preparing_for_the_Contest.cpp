#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=(n-k-1);i++) cout<<n-i+1<<" ";
    for(int i=1;i<=k+1;i++) cout<<i<<" ";
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}