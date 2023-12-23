#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    char c;int n;
    cin>>c>>n;
    for(int i=1;i<=8;i++){
        if(n!=i)cout<<c<<i<<'\n';
    }
    for(char k='a';k<='h';k++){
        if(k!=c)cout<<k<<n<<'\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}