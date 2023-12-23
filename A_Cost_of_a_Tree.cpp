#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod (ll)(1e9 + 7)
ll inversions = 0;
vector<ll> v(1000000);

ll dfs(vector<ll> &vis, vector<ll> &v, vector<vector<pair<ll, ll>>> &adj, ll ver)
{
    vis[ver] = 1;
    ll cnt = 0;
    for (auto j : adj[ver])
    {
        if (vis[j.first] == -1)
        {
            ll c = dfs(vis, v, adj, j.first);
            v.push_back((1 + c) * j.second);
            cnt += (c + 1);
        }
    }
    // cout << ver << ' ' << cnt << '\n';
    return cnt;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T = 1;
    cin >> T;
    // vector<vector<ll>> dp(4001, vector<ll>(4001, 0));
    while (T--)
    {
        ll n, c, u, x, y, z;
        cin >> n >> c >> u;
        u--;
        vector<vector<pair<ll, ll>>> adj(n);
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> x >> y >> z;
            x--;
            y--;
            adj[y].push_back({x, z});
            adj[x].push_back({y, z});
        }
        vector<ll> vis(n, -1);
        vector<ll> v;
        dfs(vis, v, adj, u);
        sort(v.begin(), v.end(), greater<ll>());
        ll ans = 0;
        for (ll i = c; i < v.size(); i++)
            ans += v[i];
        cout << ans << '\n';
    }
}
// cout<<setprecision(15)