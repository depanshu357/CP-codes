#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    char c;
    cin>>c;
    string s = "codeforces";
    for(int i=0;i<s.size();i++){
        if(c==s[i]){cout<<"YES\n";return;}
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