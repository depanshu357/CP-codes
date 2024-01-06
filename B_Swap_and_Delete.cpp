#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin>>s;
    int ones = 0, zeroes = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') ones++;
        else zeroes++;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' && zeroes) zeroes--;
        else if(s[i]=='1' && !zeroes) {cout<<s.size()-i<<'\n';return;}
        else if(s[i]=='0' && ones) ones--;
        else if(s[i]=='0' && !ones) {cout<<s.size()-i<<'\n';return;}
    }
    cout<<"0\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}