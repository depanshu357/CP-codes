#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int str[n];
    int count[11];
    for (int i = 0; i < 11; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        str[i] = c - '0';
        count[str[i]]++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}