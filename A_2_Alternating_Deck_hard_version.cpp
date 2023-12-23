#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int counter = 3;
    int flag = 0;
    int aliceWhite = 0, aliceBlack = 0, bobWhite = 0, bobBlack = 0;
    int i = 1;
    while (n)
    {
        if (counter == 3 || counter == 2)
        {
            if (n - i < 0)
            {
                i = n;
            }
            if ((i % 2) != 0)
            {
                if (flag)
                {
                    aliceWhite += (i / 2 + 1);
                    aliceBlack += (i / 2);
                    flag = 0;
                }
                else
                {
                    aliceBlack += (i / 2 + 1);
                    aliceWhite += (i / 2);
                    flag = 1;
                }
            }
            else
            {
                aliceWhite += (i / 2);
                aliceBlack += (i / 2);
            }
        }
        else
        {
            if (n - i < 0)
                i = n;
            if ((i % 2) != 0)
            {
                if (flag)
                {
                    bobWhite += (i / 2 + 1);
                    bobBlack += (i / 2);
                    flag = 0;
                }
                else
                {
                    bobBlack += (i / 2 + 1);
                    bobWhite += (i / 2);
                    flag = 1;
                }
            }
            else
            {
                bobWhite += (i / 2);
                bobBlack += (i / 2);
            }
        }
        n -= i;
        i++;
        counter++;
        counter%=4;
    }
    cout << aliceBlack << " " << aliceWhite<< " " << bobBlack << " " << bobWhite << endl;
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