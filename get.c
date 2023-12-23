#include <stdio.h>
int lcm(int x, int y)
{
    int max = (x > y) ? x : y;
    while (1)
    {
        if (max % x == 0 && max % y == 0)
        {
            break;
        }
        ++max;
    }
    return max;
}
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        int count = 0;
        for (int j = 1; j <= n2; j++)
        {
            if (lcm(n1, j) <= n2)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}