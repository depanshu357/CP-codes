#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define ll long long
int cmp(vector<int> &a, vector<int> &b)
{
    return a[0] > b[0];
}
void solve()
{
    int amount;
    cin >> amount;
    vector<int> arr(9);
    map<int, int> m;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        m[arr[i]] = i + 1;
    }
    int num;
    for (auto it : m)
    {
        num = it.first;
        break;
    }
    vector<vector<int>> res;
    for (auto it : m)
    {
        res.push_back({it.second, it.first});
    }
    sort(res.begin(), res.end(), cmp);
    int qu = amount / num;
    int rem = amount % num;
    char x = '0' + m[num];
    // string x = to_string(m[num]);
    // cout << x << endl
    //      << s << endl;
    if (!qu)
    {
        cout << "-1\n";
        return;
    }
    string ans = "";
    while (qu--)
    {
        ans += x;
    }

    int str = 0, i = 0;
    while (str < ans.size() && res[i][0] > m[num] && rem > 0)
    {
        if (rem - (res[i][1] - num) >= 0)
        {
            ans[str++] = res[i][0] + '0';
            rem -= res[i][1] - num;
        }
        else
            i++;
    }
    cout << ans << "\n";
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