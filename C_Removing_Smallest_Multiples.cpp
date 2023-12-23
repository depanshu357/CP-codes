#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        long long int a[n + 1];
        cin >> s;
        for (long long int i = 1; i <= n; i++)
        {
            a[i] = s[i - 1] - '0';
        }
        long long int cost[n + 1];
        for (long long int i = n; i >= 1; i--)
        {
            for (long long int j = i; j <= n; j += i)
            {
                if (a[j])
                    break;
                cost[j] = i;
            }
        }
        long long int ans = 0;
        for (long long int i = 1; i <= n; i++)
        {
            if (!a[i])
                ans += cost[i];
        }
        cout << ans << endl;
    }
}