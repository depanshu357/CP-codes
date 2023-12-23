#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll x;
    cin >> x;
    vector<ll> ans(n, 0);
    bool evepar = false;
    bool oddpar = false;

    ans[0] = arr[0];
    ll evem = 0, oddm = 0;
    if (ans[0] % 2)
    {
        oddm = ans[0];
        oddpar = true;
    }
    else
    {
        evem = ans[0];
        evepar = true;
    }

    for (int i = 1; i < n; i++)
    {
        if (evepar == false)
        {
            if (arr[i] % 2)
            {
                ans[i] = arr[i] + oddm;
                oddm = max(ans[i], oddm);
            }
            else
            {
                ans[i] = arr[i] + oddm - x;
                evepar = true;
                evem = ans[i];
            }
        }
        else if (oddpar == false)
        {
            if (arr[i] % 2)
            {
                ans[i] = arr[i] + evem - x;
                oddpar = true;
                oddm = ans[i];
            }
            else
            {
                ans[i] = arr[i] + evem;
                evem = max(evem, ans[i]);
            }
        }
        else
        {
            if (arr[i] % 2)
            {
                ans[i] = max(evem - x + arr[i], oddm + arr[i]);
                oddm = max(oddm, ans[i]);
            }
            else
            {
                ans[i] = max(evem + arr[i], oddm + arr[i] - x);
                evem = max(evem, ans[i]);
            }
        }
    }
    cout << ans[n - 1] << endl;

    return;
}

int main()
{
    fastio();

    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}