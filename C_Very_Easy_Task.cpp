#include <bits/stdc++.h>
using namespace std;
int isAlright(int n, int mid, int x, int y)
{
    int pre = mid - 1;
    if (max((n - mid) * x, mid * y) <= max((n - pre) * x, pre * y))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int time = 0;
    time += min(x, y);
    n--;
    int l = 0, r = n;
    int mid;
    while (r - l > 1)
    {
        mid = (l + r) / 2;
        if (isAlright(n, mid, x, y))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << max((n - l) * x, l * y) + min(x, y) << endl;
}