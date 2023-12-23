#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool comp(pair<pair<ll,ll>,ll>a,pair<pair<ll,ll>,ll>b){
    if(a.first == b.first){
        return a.second<b.second;
    }else{
        if(a.first.first == b.first.first) return a.first.second > b.first.second;
        else return a.first.first > b.first.first;
    }
}
void solve(){
    ll n,m,h;
    cin>>n>>m>>h;
    vector<pair<pair<ll,ll>,ll>> polls;
    for(ll i=0;i<n;i++){
        vector<ll> arr(m);
        for(ll j=0;j<m;j++) cin>>arr[j];
        sort(arr.begin(),arr.end());
        ll sum =0;
        ll poll  =0;
        ll penalty =0 ;
        for(ll t=0;t<m;t++){
            sum += arr[t];
            if(sum>h) break;
            poll += 1 ;
            penalty += sum;
        }
        polls.push_back({{poll,-penalty},i+1});
    }
    sort(polls.begin(),polls.end(),comp);
    // reverse(polls.begin(),polls.end());
    ll mini = n;
    for(ll i=0;i<n;i++){
        // cout<<polls[i].first.first<<" "<<polls[i].first.second<<" "<<polls[i].second<<" ";
        if(polls[i].second == 1){
            // mini = min(mini,n-i);
            cout<<i+1<<'\n';
            break;
        }
    }
    // cout<<mini<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}