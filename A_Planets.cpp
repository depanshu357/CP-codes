#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (mp.find(a) != mp.end())
            {
                mp[a]++;
            }
            else
            {
                mp[a] = 1;
            }
        }
        auto it = mp.begin();
        int cost = 0;
        for (; it != mp.end(); it++)
        {
            if (it->second > c)
                cost += c;
            else
                cost += it->second;
        }
        cout << cost << endl;
    }
}