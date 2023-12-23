#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.length();
    int steps = 0;
    for (int t = 0; t < k; t++)
    {
        int mine = 1e9;
        for (int i = 0; i < 26; i++)
        {
        int sum = 0;
            for (int j = t; j < n; j += k)
            {
                sum += min(abs(s[j] - 'a' - i), abs(26 - abs(s[j] - 'a' - i)));
            }
            if (sum < mine)
                mine = sum;
            //  cout<<sum<<" ";
        }
        // cout<<endl;
        // cout << mine << " ";
        steps += mine;
    }
    cout << steps << '\n';
    // cout<<sum<<'\n';
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