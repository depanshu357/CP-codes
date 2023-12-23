#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int del;
    scanf("%d", &del);
    int flag = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (flag == 1)
        {
            arr[i] = arr[i + 1];
        }
        else if (arr[i] == del)
        {
            arr[i] = arr[i + 1];
            flag = 1;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}