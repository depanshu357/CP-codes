#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char str[n];
        char ans[n];
        int count = 0;
        string s;
        int flag = 0;
        for (int i = 0; i < n; i++)
            cin >> str[i];
        // cout << str;
        for (int i = n - 1; i >= 0;)
        {
            if (str[i] == '0')
            {
                i--;
                int num = str[i] - '0';
                i--;
                num = (str[i] - '0') * 10 + num;
                i--;
                s.push_back(num + 'a' - 1);
                ans[count++] = (num + 'a' - 1);
                // cout << num << endl;
                // cout << num << "-xa ";
            }
            else
            {
                s.push_back(str[i] - '1' + 'a');
                i--;
                // cout << (str[i] - '1') << "-ya ";
                ans[count++] = str[i] - '1' + 'a';
            }
        }
        // cout << s.size() << endl;
        for (int i = count - 1; i >= 0; i--)
        {
            cout << s[i];
        }
        cout << endl;
    }
}