// C++ program to find (a^b) mod m for a large 'a'
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MOD(string num, int mod)
{
    ll res = 0;

    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + num[i] - '0') % (mod - 1);

    return res;
}

ll ModExponent(ll a, ll b, ll m)
{
    ll result;
    if (a == 0)
        return 0;
    else if (b == 0)
        return 1;
    else if (b & 1)
    {
        result = a % m;
        result = result * ModExponent(a, b - 1, m);
    }
    else
    {
        result = ModExponent(a, b / 2, m);
        result = ((result % m) * (result % m)) % m;
    }
    return (result % m + m) % m;
}

// Driver program to run the case
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll m = 1e9 + 7;

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            sum = (sum + 3) % m;
            continue;
        }
        ll a = 10;
        // String input as b is very large
        // string b = to_string((int)pow(10, arr[i] - 1));
        ll m = 1e9 + 7;
        // ll remainderB = MOD(b, m);
        // cout << remainderB << " ";

        ll temp = ModExponent(a, arr[i]-1, m);
        ll temp2 = ((9 % m) * (temp % m)) % m;
        cout << temp2 << "k ";
        ll temp3 = temp2 / 4;
        cout<<temp3<<"t ";
        sum = (sum + temp3 + 1) % m;
    }
    cout << sum << '\n';
    return 0;
}
