#include <stdio.h>
long long int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int x;
    scanf("%d", &x);
    int h[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &h[i]);
    }
    int max_x = 1;
    int sum_x = 1;

    // Displaying elements of original array
    //  printf("Elements of original array: \n");
    //  for (int i = 0; i < length; i++) {
    //      printf("%d ", [i]);
    //  }
    int temp;
    // Sort the array in ascending order
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (h[i] > h[j])
            {
                temp = h[i];
                h[i] = h[j];
                h[j] = temp;
            }
        }
    }
    for (int i = 1; i < x; i++)
    {
        if (h[i] == h[i - 1] + 1)
        {
            sum_x++;
        }
        if (max_x < sum_x)
        {
            max_x = sum_x;
        }
        if (h[i] != h[i - 1] + 1)
        {
            sum_x = 1;
        }
    }
    int y;
    scanf("%d", &y);
    int v[y];
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &v[i]);
    }
    int max_y = 1;
    int sum_y = 1;
    for (int i = 0; i < y; i++)
    {
        for (int j = i + 1; j < y; j++)
        {
            if (v[i] > v[j])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for (int i = 1; i < y; i++)
    {
        if (v[i] == v[i - 1] + 1)
        {
            sum_y++;
        }
        if (max_y < sum_y)
        {
            max_y = sum_y;
        }
        if (v[i] != v[i - 1] + 1)
        {
            sum_y = 1;
        }
    }
    int area = (max_x + 1) * (max_y + 1);
    printf("%d", area);
    return 0;
}