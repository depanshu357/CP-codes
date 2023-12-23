#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll sum = 0;
    ll counter = 0;
    ll flag = 0;
    if(arr[0]<0) {counter++;flag=1;}
    sum += abs(arr[0]);
    for(ll i=1;i<n;i++){
        // cout<<flag<<" ";
        sum += abs(arr[i]);
        if(flag && arr[i]<=0 && arr[i-1]<=0) continue;
        else if(arr[i]<0) {counter++;flag=1;}
        else if(arr[i]>=0 ) {flag =0;continue;}
    }
    cout<<sum<<" "<<counter<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}