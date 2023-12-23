#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    vector<int> count(10000, 0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // count[a]++;
    }
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    if(count[1] > count[0]){
     cout << "NO\n";
            return;   
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0)continue;
        if (count[arr[i]] > count[arr[i] - 1])
        {
            cout << "NO\n";
            return;
        }
    }
    // for(int i=0;i<5;i++) cout<<count[i]<<" ";
    cout << "YES\n";
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