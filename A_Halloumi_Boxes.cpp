#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int flag = true;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){flag = false;break;}
    }
    if(flag){cout<<"YES\n";return;}
    if(k==1){
        if(n==1){cout<<"YES\n";return;}
        else {cout<<"NO\n";return;}
    }
    cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}