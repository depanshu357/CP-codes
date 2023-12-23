#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    char s[n];
    for(long long i=0;i<n;i++)
    cin >> s[i];
    long long count1 = 0, count0 = 0;
    for (long long i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count0++;
        if (s[i] == '1')
            count1++;
    }
    if (count0 == 0)
    {
        cout << count1 * count1 << endl;
        return;
    }
    else if (count1 == 0)
    {
        cout << count0 * count0 << endl;
        return;
    }
    else
    {
        long long ans1 = count0 * count1;
        long long cons1 = 1, cons0 = 1;
        long long precons1 = 0, precons0 = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i + 1] == '0')
            {
                cons0++;
            }
            else if (s[i] == s[i + 1] && s[i + 1] == '1')
            {
                cons1++;
            }
            else
            {
                if (precons0 < cons0)
                    precons0 = cons0;
                if (precons1 < cons1)
                    precons1 = cons1;
                cons0=1;
                cons1=1;
            }
        }
        if (precons0 < cons0)
            precons0 = cons0;
        if (precons1 < cons1)
            precons1 = cons1;
        long long ans2 = precons0 * precons0;
        long long ans3 = precons1 * precons1;
        cout << max(ans1, max(ans2, ans3)) << endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}