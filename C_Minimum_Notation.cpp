#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<int, int> mp1;
        multimap<int, int> mp2;
        for (int i = 1; i <= s.length(); i++)
        {
            mp1[i] = s[i - 1] - '0';
            mp2.insert(pair<int, int>{s[i - 1] - '0', i});
        }
        auto it2 = mp2.rbegin();
    }
}