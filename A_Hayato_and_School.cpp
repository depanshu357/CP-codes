#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int odd = 0, even = 0;
    vector<int> oddPos, evenPos;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((arr[i] % 2) == 0)
        {
            even++;
            // cout<<i<<"e";
            evenPos.push_back(i + 1);
        }
        else{
            odd++;
            // cout<<i<<"o";
        oddPos.push_back(i + 1);
        }

    }
    // for(int i=0;i<evenPos.size();i++){
    //     cout<<evenPos[i]<<" ";
    // }
    // cout<<endl;
    // for(auto i: oddPos){
    //     cout<<oddPos[i]<<" ";
    // }
    // cout<<endl;
    if (odd >= 3)
    {
        cout << "YES\n";
        cout<<oddPos[0]<<" "<<oddPos[1]<<" "<<oddPos[2]<<endl;
        return;
    }
    if (even >= 2 && odd >= 1)
    {
        cout << "YES\n";
        cout<<evenPos[0]<<" "<<evenPos[1]<<" "<<oddPos[0]<<endl;
        return;
    }
    if (even == 1 && odd == 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "NO\n";
    return;
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