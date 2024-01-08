#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        v[s[i]-'A']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(v[i]>=i+1)count++;
    }
    cout<<count<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}