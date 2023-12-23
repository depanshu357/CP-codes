#include <stdio.h>
int totalsum(int arr[], int n, int m,int k)
{   int i=(k/m);
    int j=(k%m);
    int sum = arr[i * m + j];
    int x = 1, y = 1;
    while (i + x < n && j + y < m && i + x >= 0 && j + y >= 0)
    {
        sum += arr[(i + x) * m + (j + y)];
        x++;
        y++;
    }
    x = -1;
    y = -1;
    while (i + x < n && j + y < m && i + x >= 0 && j + y >= 0)
    {
        sum += arr[(i + x) * m + (j + y)];
        x--;
        y--;
    }
    x = -1;
    y = 1;
    while (i + x < n && j + y < m && i + x >= 0 && j + y >= 0)
    {
        sum += arr[(i + x) * m + (j + y)];
        x--;
        y++;
    }
    x = 1;
    y = -1;
    while (i + x < n && j + y < m && i + x >= 0 && j + y >= 0)
    {
        sum += arr[(i + x) * m + (j + y)];
        x++;
        y--;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n * m];
        for (int j = 0; j < (n * m); j++)
        {
            scanf("%d", &arr[j]);
        }
        int maxsum= arr[0];
        for(int j=0;j<n*m;j++){
            int sum= totalsum(arr,n,m,j);
            if(maxsum<sum) maxsum = sum;

        }
        printf("%d\n",maxsum);

    }
    
    return 0;
}