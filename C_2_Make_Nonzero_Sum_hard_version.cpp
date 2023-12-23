#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    vector<int> v[2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            if(arr[i]==0 && i!=0){
                v[0].push_back(i);
            }else
            v[0].push_back(i + 1);
            sum += arr[i];
        }
        else if (sum == 1)
        {
            if (arr[i] == 1)
            {
                v[1].push_back(i + 1);
                sum = 0;
            }
            else if (arr[i] == -1)
            {
                v[1].push_back(i);
                v[0].push_back(i + 1);
                v[1].push_back(i + 1);
                sum = 0;
            }
        }
        else
        {
            // sum=-1;
            if (arr[i] == 1)
            {
                v[1].push_back(i);
                v[0].push_back(i + 1);
                v[1].push_back(i + 1);
                sum = 0;
            }
            else if (arr[i] == -1)
            {
                v[1].push_back(i + 1);
                sum = 0;
            }
        }
    }
    if (arr[n - 1])
        if (sum != 0)
        {
            cout << "-1" << endl;
            return;
        }
    // cout<<v[0].size()<<" ";
    // cout<<v[1].size()<<endl;
    cout << min(v[0].size(), v[1].size()) << endl;
    for (int i = 0; i < min(v[0].size(), v[1].size()); i++)
    {
        cout << v[0][i] << " " << v[1][i] << endl;
    }
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