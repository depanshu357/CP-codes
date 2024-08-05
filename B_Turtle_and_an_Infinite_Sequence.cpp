#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    if(m==0) {cout<<n<<endl;return ;}
    int num = n;
    ll ans = 0; ll l = max(0,n-m); ll r= n +m;
    for(int i=31;i>=0;i--){
        if((l & (1LL << i)) || (r & (1LL <<i)) || ((l>>(i+1))!=(r>>(i+1)))){
            ans |= (1LL << i);
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}