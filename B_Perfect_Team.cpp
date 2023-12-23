#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        int c, m, x;
        cin >> c >> m >> x;
        if (c == 0 || m == 0)
            cout << "0" << endl;
        else
        {
            int count = 0;
            if (x <= min(c, m))
            {
                count += x;
                c -= x;
                m -= x;
                x = 0;
                // cout << count << " ";
                if (c <= m)
                {
                    if (m - c <= c)
                    {

                        count += (m - c);
                        // cout << count << " ";
                        c = c - (m - c);
                        m = m - 2*(m - c);
                        count += ((c / 3) * 2);
                        // cout << count << " ";
                        if (c % 3 == 2)
                        {
                            count += 1;
                        }
                    }else{
                        count+=c;
                    }
                }
                else
                {
                    if (c - m <= m)
                    {

                        count += (c - m);
                        // cout << count << " ";
                        c = c - 2*(c - m);
                        m = m - (c - m);
                        count += ((m / 3) * 2);
                        // cout << count << " ";
                        if (m % 3 == 2)
                        {
                            count += 1;
                            // cout << count << " ";
                        }
                    }
                    else{
                        count+=m;
                    }
                }
            }
            else if (x >= max(c, m))
            {
                count += (min(c, m));
            }
            else
            {
                count += (min(m, c));
                c -= min(m, c);
                x -= min(m, c);
                m -= min(m, c);
            }
            cout << count << endl;
        }
    }
}