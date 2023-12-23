#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout<<s;
    int stage =1;
    int i=0;
    if(!(s[i]=='m' || s[i]=='M')){cout<<"NO\n";return;}
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1] )continue;
        if((s[i-1]=='m' || s[i-1]=='M')&&(s[i]=='e' || s[i]=='E'))continue;
        if((s[i-1]=='e' || s[i-1]=='E')&&(s[i]=='o' || s[i]=='O'))continue;
        if((s[i-1]=='o' || s[i-1]=='O')&&(s[i]=='w' || s[i]=='W'))continue;
        cout<<"NO\n";return;
    }
    if(s[n-1]=='w'){

    cout<<"YES\n";return;
    }
    else cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}