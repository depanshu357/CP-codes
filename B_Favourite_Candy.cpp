#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int arr[n], brr[k];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    map <ll, pair<long long, long long>> comb;
    for (long long i = 0; i < n; i++)
    {
        comb[brr[i]] = {arr[i], i + 1};
    }
    int q;
    cin >> q;
    pair<long long, long long> ans[n + 1];
    auto itr = comb.rbegin();
    long long sum = 0;
    sum = itr->second.first;
    ans[itr->second.second].first = 1;
    ans[itr->second.second].second = sum;
    itr++;
    for (; itr != comb.rend(); itr++)
    {
        // itr->second.first = sum + itr->second.first;
        // sum = itr->second.first;
        // cout<<sum<<" ";
        cout<<itr->first<<" "<<itr->second.first<<" "<<itr->second.second<<endl;
        sum = sum + itr->second.first;
        if((itr->second.first) % k ==0)
        ans[itr->second.second].first = (itr->second.first) / k;
        else 
        ans[itr->second.second].first = (itr->second.first) / k + 1;
        ans[itr->second.second].second = (sum);
    }
    itr = comb.rbegin();
    sum = 0;
    for(;itr!=comb.rend();itr++){
        ans[itr->second.second].first = sum + 1;
        sum = sum + ans[itr->second.second].first;
    }
    for (long long i = 0; i < q; i++)
    {
        long long x, y;
        cin >> x >> y;
            cout<<ans[x].first<<" "<<ans[x].second<<endl;
        if (ans[x].first <= y && y <= ans[x].second){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}