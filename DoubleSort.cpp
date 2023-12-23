#include <iostream>
#include <vector>
typedef long long int ll;
using namespace std;
void solve()
{
    ll n, count = 0;
    vector<pair<int, int>> v;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                if (b[i] > b[j])
                {
                    cout << "-1" << endl;
                    return;
                }
                // else
                // {
                //     count++;
                //     swap(a[i], a[j]);
                //     swap(b[i], b[j]);
                //     v.push_back(make_pair(i, j));
                // }
            }
            else if (a[i] > a[j])
            {
                if (b[i] < b[j])
                {
                    cout << "-1" << endl;
                    return;
                }
                else
                {
                    count++;
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    v.push_back(make_pair(j,i));
                }
            }
            else
            {
                if (b[i] > b[j])
                {
                    count++;
                    // swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    v.push_back(make_pair(j,i));
                }
            }
        }
    }
    cout << count << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first + 1 << " " << v[i].second + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
    return 0;
}