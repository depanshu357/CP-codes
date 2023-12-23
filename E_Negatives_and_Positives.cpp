#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<int> v(n);
    long long ngs = 0, pst = 0;
    long long zeroes = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]<=0)ngs++;
        v[i] = abs(v[i]);

    }
    sort(v.begin(), v.end());
    long long sum = 0;
    for (long long i = 0; i < n; i++)
    {
        sum += (abs(v[i]));
    }
    if ((ngs % 2 || zeroes) == 0)
    {
    }
    else
    {
        sum -= (2 * v[0]);
    }
    cout << sum << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
        solve();
}