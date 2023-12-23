#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool isPos = false;
    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            isPos = true;
    if (!isPos)
    {
        cout << n - 1 << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << n - i - 1 << " " << n - i << '\n';
        }
        return;
    }
    int posPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            posPos = i;
            break;
        }
    }
    cout << 5 + 2 * (n - 1) << '\n';
    for (int i = 0; i < 5; i++)
    {
        cout << "1 " << posPos + 1 << '\n';
    }
    for (int i = 1; i <= n - 1; i++)
    {
        cout << i + 1 << " " << i << '\n';
        cout << i + 1 << " " << i << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}