#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll m = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (s[0] != s[n - 1] && s[0] != '?' && s[n - 1] != '?')
    {
        cout << "0\n";
        return;
    }
    if (s[0] == '?' && s[n - 1] == '?')
    {
        ll ans = 1;
        int flag = 0;
        for (int t = 1; t <= 26; t++)
        {
            if (s[1] == (t + 'a') || s[n - 2] == t + 'a')
            {
                continue;
            }
            flag=1;
            for (int i = 1; i < n - 1; i++)
            {
                while (s[i] == '?')
                {
                    ll count = 0;   
                    // if(s[i-1]>='a' && s[i-1]<='z') count++;
                    if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                        count++;
                    ans = ((ans % m) * (26 - count - 1)) % m;
                    i++;
                }
            }
        }
        if(flag)
        cout<<ans<<'\n';
        else cout<<"0\n";
    }
    else
    {
        ll ans = 1;
        for (int i = 1; i < n - 1; i++)
        {
            while (s[i] == '?')
            {
                ll count = 0;
                // if(s[i-1]>='a' && s[i-1]<='z') count++;
                if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                    count++;
                ans = ((ans % m) * (26 - count - 1)) % m;
                i++;
            }
        }
        cout << ans << '\n';
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