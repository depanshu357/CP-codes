#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    x--;
    ll mod = 1e9 + 7;
    vector<vector<ll>> dp(n + 1, vector<ll>(5, 0));
    ll prev = 0;
    for (ll i = 0; i < k; i++)
    {
        dp[1][i] = 1;
        prev++;
    }
    for (ll i = 2; i <= n; i++)
    {
        ll new_prev = 0;
        for (ll j = 0; j < k; j++)
        {
            if (j == x)
            {
                dp[i][j] = prev % mod;
            }
            else
            {
                dp[i][j] = prev % mod - dp[i - 1][j] % mod;
                dp[i][j] %= mod;
            }
            if (dp[i][j] < 0)
                dp[i][j] += mod;
            new_prev += dp[i][j] % mod;
            new_prev %= mod;
        }
        prev = new_prev % mod;
    }
    cout << prev << "\n";
    return;
}

int main()
{
    fastio();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 return 0;
}