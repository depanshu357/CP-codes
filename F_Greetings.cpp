#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file  
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional> // for less  
#include<iostream>
#include<set>
typedef unsigned long long ull;
typedef long long ll;
using namespace __gnu_pbds;
using namespace std;
// Declaring ordered_set 
typedef tree<ll, null_type, less<ll>, rb_tree_tag,  
            tree_order_statistics_node_update>  
    ordered_set;  
void solve(){
    ll n;cin>>n;
    map<ll,ll> mp;
    ordered_set st;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        st.insert(b);
        mp[a] = b;      
    }
    ll ans = 0;
    for(ll i=0;i<n;i++){
        auto it = *(mp.begin());
        ll a = it.first;
        ll b = it.second;
        ll index = st.order_of_key(b);
        // cout<<index<<" ";
        ans += index;
        st.erase(b);
        mp.erase(a);
    }
    
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}