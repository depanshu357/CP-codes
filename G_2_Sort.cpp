#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> len(n,1);
    int ans = 0;
    for(int i=n-2;i>=0;i--){
        if(v[i]<2*v[i+1]) len[i]  = 1 + len[i+1];
        if(len[i]>=k+1) ans++;
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}