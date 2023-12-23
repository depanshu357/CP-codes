#include <bits/stdc++.h>
using namespace std;
int loop(int checked[],int a[],int k){
    int t=0;
    while(1){
        t=a[k];
        if(t==26){
            return 0;
            break;
        }else if(t==k){
            return 1;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    int a[26];
    int checkbox[27];
    for (int i = 0; i <= 26; i++)
        checkbox[i] = 0;
    char s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    char ans[n];
    for (int i = 0; i < 26; i++)
    {
        a[i] = 26;
    }
    int all_done = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 26; i++)
        {
            if (checkbox[i] == 0)
            {
                all_done = 0;
                break;
            }
            else
            {
                all_done = 1;
            }
        }
        if (!all_done)
        {
            int k = 0;
            if (a[s[i] - 'a'] != 26)
                continue;
            while (checkbox[k] != 0 || k == int(s[i] - 'a') || loop(checkbox,a,k))
            {
                k++;
                k = k % 26;
            }
            k = k % 26;
            if (a[k] != 26)
                cout << "k ";
            checkbox[k] = 1;
            a[s[i] - 'a'] = k;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << char(a[s[i] - 'a'] + 'a');
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}