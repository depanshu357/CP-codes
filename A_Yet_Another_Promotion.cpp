#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll a,b;cin>>a>>b;
    ll n,m;cin>>n>>m;
    ll cost1 =0,cost2=0,cost3=0;
        cost1 = (n/(m+1))*(m*a);
        cost1 += ((n%(m+1))*a);

        cost2 = (n)*b;
        cost3 = ((n/(m+1))*(m*a)) + (((n%(m+1))*b));
    // cout<<cost1<<" "<<cost2<<" "<<cost3<<" ";
    cout<<min(cost1,min(cost2,cost3))<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}