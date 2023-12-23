#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll i =0,j = n-1;
    ll maxi = 0;
    while(i<=j){
        ll water = (j-i-1)*min(arr[i],arr[j]);
        maxi = max(maxi,water);
        if(arr[i]<arr[j]) i++;
        else j--;
    }
    cout<<maxi<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}