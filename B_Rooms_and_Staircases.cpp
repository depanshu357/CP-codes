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
        string s;
        cin >> s;
        int count = 0;
        int max_count = 0;
        if (s[0] == '0')
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '1')
                {
                    count = i + 1;
                    if ((n - i) > (i + 1))
                    {
                        count += (n - i);
                    }
                    else
                    {
                        count += (i + 1);
                    }
                    max_count = count;
                    break;
                }
                else
                {
                    count++;
                }
            }
        }
        // cout<<max_count<<endl;
        if (s[s.size() - 1] == '0')
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {

                    count = n - i;
                    if (n - i > i + 1)
                    {
                        count += n - i;
                    }
                    else
                    {
                        count += i + 1;
                    }
                    if (max_count < count)
                        max_count = count;
                    break;
                }
            }
        }
    if(s[s.size()-1]=='1' && s[0]=='1')
        {
            max_count = 2 * n;
        }
    if(s[s.size()-1]=='0' && s[0]=='0')
        {
           count=n;
           if(max_count<count) max_count=count;
        }
        cout << max_count << endl;
    }
}