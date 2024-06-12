#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        char c;cin>>c;
        v[c-'a']++;
    }
    int odds = 0;
    for(int i=0;i<26;i++){
        if(v[i]%2) odds++;
    }
    if(k<odds-1) cout<<"NO\n";
    else if(k==odds-1 || k==odds) cout<<"YES\n";
    else cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}