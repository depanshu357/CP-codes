#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            cout<<"13\n";return;
        }
        if(s[i]=='3'){
            cout<<"31\n";return;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}