#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int key1 = n - 1, key2 = 0;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        if ((i % 2))
            ans[i] = arr[key2++];
        else
            ans[i] = arr[key1--];
    }
    int sum = ans[0];
    for (int i = 1; i < n; i++)
    {
        if (ans[i] == sum)
        {
            cout << "NO\n";return;
        }
        sum+=ans[i];
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    // cout<<key1<<" "<<key2;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}