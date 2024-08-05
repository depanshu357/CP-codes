#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;cin>>s;
    if(s.size()==1){
        cout<<"NO"<<endl;
        return;
    }
    int i=1;
    for(;i<s.size();i++){
        if(s[i]!=s[0]) break;
    }
    if(i==s.size()){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
    swap(s[0],s[i]);
    cout<<s<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}