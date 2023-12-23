#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n,k,g;cin>>n>>k>>g;
    ll temp = g/2 + g%2;
    if(n*(temp-1) >= k*g){
        cout<< k*g <<'\n';
        return;
    }
    ll sum = k*g - n*(temp-1);
    ll help = (sum / g);
    ll lost = help*g;
    ll rem = sum%g;
    ll consi = temp - 1 + sum%g;
    // cout<<consi<<" ";
    if(consi%g >= temp){lost += (consi + g - consi%g );}
    else lost += (consi - consi%g);
    cout<< k*g - lost <<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}