#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,m,k;cin>>n>>m>>k;
    if(k==1){cout<<"1\n";return;}
    if(k>3){cout<<"0\n";return;}
    int quo = m/n; int rem = m%n;
    int ans = 0;
    if(k==2){
        if(quo){
            ans += (quo) + n-1;
        }else{
            ans += rem;
        }
    }else if(k==3){
        if(quo){
            ans += (quo-1)*(n-1) + rem;
        }
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