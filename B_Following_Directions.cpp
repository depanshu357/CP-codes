#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int x =0;int y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){x--;if(x==1 && y==1){cout<<"YES\n";return;}}
        else if(s[i]=='R'){x++;if(x==1 && y==1){cout<<"YES\n";return;}}
        else if(s[i]=='U'){y++;if(x==1 && y==1){cout<<"YES\n";return;}}
        else if(s[i]=='D'){y--;if(x==1 && y==1){cout<<"YES\n";return;}}
    }
    cout<<"NO\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}