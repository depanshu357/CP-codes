#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    c = b;
    sort(c.begin(), c.end());
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
        if (c[i] > a[i])
        {
            cout << "0" << endl;
            return;
        }
    sort(b.begin(),b.end(),greater<ll>());
    vector<ll> help(n);
    for (ll i = 0; i < n; i++)
    {
        ll l = 0, r = n - 1;
        r = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        help[i] = n - r;
    }
    // sort(help.begin(), help.end());
    ll counter = 0;
    ll ans = 1;
    ll mod  = 1e9 + 7;
    for (ll i = 0; i < n; i++)
    {
        // cout<<help[i]<<" ";
        if (help[i] - counter <= 0)
        {
            cout << "0" << endl;
            return;
        }
        ans = (ans*(help[i] - counter++))%mod;
    }
    cout << ans%mod << endl;
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