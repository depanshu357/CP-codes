#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vector<ll> v(n),preSum(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll target ;cin>>target;
    preSum[0] = v[0];
    if(preSum[0] >= target) {cout<<  preSum[0] - target <<'\n';return 0;}
    for(ll i=1;i<n;i++){
        preSum[i] = preSum[i-1] + v[i];
        if(preSum[i]>=target){
            cout<< abs(preSum[i] - target)<<'\n';
            return 0;
        }
    }
    cout<< abs(preSum[n-1] - target)<<'\n';
}