#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    vector <pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        v.push_back({arr[i],0});
    }
    unordered_map<ll, vector<pair<ll, ll>>> mp;
    for (ll i = 1; i <= m; i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        mp[v[a].first].push_back({v[a].second,i});
        v[a] = {b,i};
    }
    for(ll i=0;i<n;i++){
        mp[v[i].first].push_back({v[i].second,m+1});
    }
    ll res = 0;
    for(auto it : mp){
        ll num = it.first;
        auto brr = it.second;
        ll times_present = 0;
        for(auto t : brr) times_present += (t.second - t.first);
        ll times_not_present = m + 1 - times_present;
        res += (times_present*times_not_present) + ((times_present*(times_present-1))/2);

    }
    cout<<res<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
}