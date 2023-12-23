#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int flag = 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "0" << endl;
        return;
    }
    int i = 0, j = n - 1;
    int count = 0;
    while(j-i>0)
    {
        while (i < n && arr[i] != 1)
        {
            i++;
            // cout << "k"<<i << " ";
        }
        while (j >= 0 && arr[j] != 0)
        {
            j--;
            // cout << "l"<<j << " ";
        }
        if(j-i<0) break;
        count++;
        i++;
        // cout<<i<<" ";
        j--;
        // cout<<j<<" ";
    }
    cout << count << endl;
    return;
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