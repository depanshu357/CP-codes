#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll wallP[n];
    for (ll i = 0; i < n; i++)
        cin >> wallP[i];
    cin >> n;
    ll wallH[n];
    for (ll i = 0; i < n; i++)
        cin >> wallH[i];
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ll posDiff = abs(wallP[i] - wallP[i - 1]);
        ll heiDiff = abs(wallH[i] - wallH[i - 1]);
        if (heiDiff >= posDiff)
        {
            ans = max(ans, min(wallH[i], wallH[i - 1]) + posDiff - 1);
        }
        else
        {
            ll temp = posDiff - 1 - heiDiff; // gap_left
            ll maxHei = temp / 2 + temp % 2 + max(wallH[i], wallH[i - 1]);
            ans = max(ans, maxHei);
        }
    }
    cout << ans;
}