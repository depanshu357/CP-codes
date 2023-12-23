#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    int temp = n;
    // k = 2*k - n;
    sort(arr.begin(), arr.end());
    int steps = 0;
    int nCopy = n;
    for (int i = 0; i < n; i++)
    {
        if (k - temp > 0)
        {
            k = k - temp;
            temp = 2*(nCopy - 1);
            steps++;
            nCopy--;
        }
        else
        {
            break;
        }
    }
    // cout<<temp<<"t ";
    // int steps = n - temp + 1;
    // cout<<steps<<"s ";
    int ans = 0;
    k = k%2 + k/2;
    // cout<<k<<"k ";
    ans = abs(arr[k-1] - arr[k + steps -1]);
    cout << ans << '\n';
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