#include <iostream>
using namespace std;
int solve(int n, int x)
{
    if (n == 0)
        return 1;
    int ans = 0;
    for (int i = x; i <= n; i++)
    {
        ans += solve(n - i, i);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << solve(n, 1);
    return 0;
}