#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll mini = INT_MAX;
    ll ans = 0;
    ll sum = 0;
    vector<ll> sufSum(n+1,0);
    for(ll i=n-1;i>=0;i--){
        if(v[i]>=0)sufSum[i] = v[i];
        if(i!=n-1) sufSum[i]+= sufSum[i+1];
        // if(i%2==0) sum += max(0,v[i]);
    }
    for(ll i=0;i<n;i++){
        if(i%2==0){
            ans = max(ans,sum + v[i] + sufSum[i+1]);
            sum += max((ll)0,v[i]);
        }else{
            ans = max(ans, sum + sufSum[i+1]);
        }
    }
    ans = max(ans,sum);
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}