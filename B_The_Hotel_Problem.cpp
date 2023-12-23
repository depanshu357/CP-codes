#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, 0});
    }
    sort(v.begin(), v.end());
    int curr = 0;
    int time = 0;
    int start = 0, end = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (v[i].second)
        {
            curr++;
        }
        else
        {
            curr--;
        }
        if (curr >= k)
        {
            time+=(v[i+1].first - v[i].first);
            // time++;
        }
    }
    cout << time << '\n';
}