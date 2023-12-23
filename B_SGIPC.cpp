#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
//  ll count ;
ll findComb(ll n,ll k,ll count,ll prev){
    if(k==1){
    return count+1;}
    for(ll i=prev;i<=n;i++){
        if((i*(k-1)) <= n-i){
            // cout<<i*(k-1)<<" "<<n<<'\n';
             count = findComb(n-i,k-1,count,i);
        }else {break;}
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // count = 0;
    ll n;cin>>n;
    ll k;cin>>k;
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(k+1,vector<int>(n+1,-1)));
    cout<<findComb(n,k,0,1)<<'\n';
}