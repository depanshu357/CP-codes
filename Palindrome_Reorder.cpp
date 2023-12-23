#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    // cout<<n<<endl;
    // int alp[26];
    vector<int> alp(26, 0);
    for (int i = 0; i < n; i++)
    {
        int a = s[i] - 'A';
        // cout<<a<<endl;
        alp[a]++;
    }
    int pos;
    int odd = 0, even = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] % 2 == 0)
            even++;
        else
        {
            odd++;
            pos = i;
        }
    }
    // for(int i=0;i<26;i++) cout<<alp[i];
    cout << "\n";
    if (n % 2 == 0)
    {
        if (odd == 0)
        {
            for (int i = 0; i < 26; i++)
            {
                if (alp[i] == 0)
                    continue;
                for (int j = 0; j < alp[i] / 2; j++)
                {
                    char c = i + 'A';
                    cout << c;
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                if (alp[i] == 0)
                    continue;
                for (int j = 0; j < alp[i] / 2; j++)
                {
                    char c = i + 'A';
                    cout << c;
                }
            }
        }
        else
        {
            cout << "NO SOLUTION";
        }
    }
    else
    {
        if (odd == 1)
        {

            for (int i = 0; i < 26; i++)
            {
                if (alp[i] == 0)
                    continue;
                for (int j = 0; j < alp[i] / 2; j++)
                {
                    char c = i + 'A';
                    cout << c;
                }
            }
            char c = pos + 'A';
            cout << c;
            for (int i = 25; i >= 0; i--)
            {
                if (alp[i] == 0)
                    continue;
                for (int j = 0; j < alp[i] / 2; j++)
                {
                    char c = i + 'A';
                    cout << c;
                }
            }
        }
        else
        {
            cout << "NO SOLUTION";
        }
    }
    return 0;
}