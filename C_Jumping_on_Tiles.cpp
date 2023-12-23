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
        int count = 0;
        multimap<char, int> mp;
        if (s[s.size() - 1] >= s[0])
        {

            for (int i = 1; i < s.size() - 1; i++)
            {
                if ((s[i] >= s[0] && s[i] <= s[s.size() - 1]))
                {
                    mp.insert(pair<char, int>(s[i], i + 1));
                    count++;
                    // cout << count << "-ya ";
                }
            }
            cout << abs(s[s.size() - 1] - s[0]) << " " << count + 2 << endl;
            auto it = mp.begin();
            cout << "1"
                 << " ";
            while (it != mp.end())
            {
                cout << it->second << " ";
                it++;
            }
            cout << s.size() << endl;
        }
        else
        {
            for (int i = 1; i < s.size() - 1; i++)
            {
                if ((s[i] <= s[0] && s[i] >= s[s.size() - 1]))
                {
                    mp.insert(pair<char, int>(s[i], i + 1));
                    count++;
                    // cout << count << "-ya ";
                }
            }
            cout << abs(s[s.size() - 1] - s[0]) << " " << count + 2 << endl;
            auto it = mp.rbegin();
            cout << "1"
                 << " ";
            while (it != mp.rend())
            {
                cout << it->second << " ";
                it++;
            }
            cout << s.size() << endl;
        }
    }
}
