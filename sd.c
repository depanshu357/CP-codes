#include <stdio.h>
int solve(int n, int prev)
{
    if (n == 0)
        return 1;
    int ans = 0;
    for (int i = prev; i <= n; i++)
    {
        ans += solve(n - i, i);
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", solve(n, 1));
    return 0;
}