#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define map map<int, int>
#define umap unordered_map<int, int>
#define take(a, n)              \
    for (int j = 0; j < n; j++) \
        cin >> a[j];
#define give(a, n)              \
    for (int j = 0; j < n; j++) \
        cout << a[j] << ' ';
#define loop(i, a, b) for (int i = (a); i < (b); i++)
#define looprev(i, a, b) for (int i = (a); i >= (b); i--)
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define PI 3.1415926535897932384626
#define mod 1000000007
#define __gcd std::gcd
void solve()
{
    int arr[5000];
    vector<vector<int>> v1(100, vector<int>(500, -1));
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            v1[i][j] = i + j;
        }
    }

    for (int i = 0; i < 5000; i++)
    {
        arr[i] = i;
    }

    string s;
    cin >> s;
    vector<vector<int>> v(10);
    vector<int> dx(10, 0);
    for (int i = 0; i < s.length(); i++)
    {
        int di = s[i] - '0';
        v[di].push_back(i);
    }

    int m;
    cin >> m;
    string a, b;
    cin >> a >> b;
    int temp = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            while (dx[j] < v[j].size() && v[j][dx[j]] < temp)
            {
                dx[j]++;
            }
        }
        int pck = temp;
        for (int j = a[i] - '0'; j <= b[i] - '0'; j++)
        {
            if (dx[j] >= v[j].size())
            {
                pck = s.length();
            }
            else
            {
                pck = max(pck, v[j][dx[j]]);
            }
        }
        temp = pck + 1;
    }
    if (temp >= s.length() + 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    int ar[6000];
    for (int i = 0; i < 6000; i++)
    {
        ar[i] = 400;
    }
    for (int i = 0; i < 5000; i++)
    {
        ar[i] = i;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}