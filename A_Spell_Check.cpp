#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // int arr[26];
    while (t--)
    {
        int n;
        cin >> n;
            string s;
            cin >> s;
        if (n == 5)
        {
            int flag1 = 0;
            int flag2 = 0;
            int cni = 0, cnm = 0, cnu = 0, cnr = 0;
            for (int i = 0; i < s.length(); i++)
            {
                    if (s[i] == 'T')
                        flag1++;
                    else if (s[i] == 'i')
                        cni++;
                    else if (s[i] == 'm')
                        cnm++;
                    else if (s[i] == 'u')
                        cnu++;
                    else if (s[i] == 'r')
                        cnr++;
            }
            if ((cni == 1 && cnm == 1) && (cnu == 1 && cnr == 1))
              flag2 = 1;
            if (flag2 == 1 && flag1 == 1)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}