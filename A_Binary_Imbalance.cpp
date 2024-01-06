#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>> s;
    int zeroes = 0, ones = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') zeroes++;
        else ones++;
    }
    if(ones==s.size())cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}