#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long

void solve()
{
    ll n, x, y;
    cin >> n;
    map<ll, vector<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        mp[x].push_back(y);
    }

    map<pair<ll, ll>, ll> m;
    for (auto it : mp)
    {
        auto temp = it.second;
        sort(temp.begin(), temp.end());
        for (ll i = 0; i < temp.size(); i++)
        {
            for (ll j = i + 1; j < temp.size(); j++)
            {
                m[{temp[i], temp[j]}]++;
            }
        }
    }
    ll ans = 0;
    for (auto it : m)
    {
        ans = max(ans, it.second);
    }
    cout << ans;
    return;
}

int main()
{
    fastio();
    solve();
    return 0;
}