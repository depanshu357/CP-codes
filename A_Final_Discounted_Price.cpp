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
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    // ll j = 1;
    ll sum =0;
    vector<ll> pos;
    for(ll i=0;i<n-1;i++){
        ll j = i+1;
        while(j<n && arr[j] > arr[i]){j++;}
        if(j == n){
            pos.push_back(i);
            sum += arr[i];
        }else{
        sum += (arr[i] - arr[j]);
        }
    }
    pos.push_back(n-1);
    sum += arr[n-1];
    cout<<sum<<'\n';
    for(ll i=0;i<pos.size();i++) cout<<pos[i]<<" ";
}