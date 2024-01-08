#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a,b;cin>>a>>b;
    ll sum = a + b;
    if((a+b)%2){
        cout<<"Alice\n";
    }else{
        cout<<"Bob\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}