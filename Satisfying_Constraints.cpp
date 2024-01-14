#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<pair<ll,ll>> con(n);
    ll maxi = INT_MAX;
    ll mini = INT_MIN;
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        con[i] = {a,b};
        if(a==1){
            mini = max(mini,b);
        }else if(a==2){
            maxi = min(maxi,b);
        }
    }
    ll count = 0;
    for(ll i=0;i<n;i++){
        if(con[i].first == 3 && mini<=con[i].second && maxi>=con[i].second){
            count++;
        }
    }
    cout<< max((ll)0,maxi - mini + 1 - count)<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}