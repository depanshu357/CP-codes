#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        if(a[i]=='0'&& b[i]=='0' && a[i+1]=='1' && b[i+1]=='1'){
            cout<<"YES\n";return;
        }
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