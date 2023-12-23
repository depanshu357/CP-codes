#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> arr[n+1];
    vector<pair<ll,ll>> v;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++){
        arr[v[i].first].push_back(v[i].second);
        arr[v[i].second].push_back(v[i].first);
    }
    ll count =0;
    set<ll> st;
    st.insert(1);count++;
    ll sum  = count;
    ll lastPos = 0;
    for(ll i=2;i<=n;i++){
        ll ind = lower_bound(arr[i].begin(),arr[i].end(),i) - arr[i].begin();
        // if(arr[i][ind] < i)
        ll k =0 ;
        if(ind)  k = arr[i][ind-1];
        lastPos = max(lastPos,k);
        sum += (i - lastPos ); 
    }
    cout<<sum<<'\n';
    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}