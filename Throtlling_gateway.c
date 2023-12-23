#include <stdio.h>
long long int per_sec(long long int arr[], long long int n)
{
    long long int drops = 0;

    long long int t = arr[n - 1];
    for (long long int j = 1; j <= t; j++)
    {
        long long int counts = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (arr[i] == j)
                counts++;
        }
        if (counts > 3)
        {
            drops = drops + (counts - 3);
        }
    }
    return drops;
}
long long int per_ten(long long int arr[], long long int n)
{
    long long int t = arr[n - 1];
    long long int drops = 0;
    long long int counts ;
    if (t > 10)
    {
        for (long long int i = 1; i <= (t - 9); i++)
        {
            counts = 0;
            for (long long int k = i; k <= (i + 9); k++)
            {
                for (long long int j = 0; j < n; j++)
                {
                    if(arr[j]==k) counts++;
                }
            }
            if(counts>20){
                drops = drops + (counts-20);
            }
        }
    }else{
        counts=0;
            for (long long int k = 1; k <=t; k++)
            {
                for (long long int j = 0; j < n; j++)
                {
                    if(arr[j]==k) counts++;
                }
            }
            if(counts>20){
                drops = drops + (counts-20);
            }
    }
    return drops;
}
long long int per_sixty(long long int arr[], long long int n)
{
    long long int t = arr[n - 1];
    long long int drops = 0;
    long long int counts ;
    if (t > 60)
    {
        for (long long int i = 1; i <= (t - 59); i++)
        {
            counts=0;
            for (long long int k = i; k <= (i + 59); k++)
            {
                for (long long int j = 0; j < n; j++)
                {
                    if(arr[j]==k) counts++;
                }
            }
            if(counts>60){
                drops = drops + (counts-60);
            }
        }
        
    }else{
        counts=0;
            for (long long int k = 1; k <=t; k++)
            {
                for (long long int j = 0; j < n; j++)
                {
                    if(arr[j]==k) counts++;
                }
            }
            if(counts>60){
                drops = drops + (counts-60);
            }
    }
    return drops;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int ans = per_sec(arr,n)+ per_ten(arr,n) + per_sixty(arr,n);
    printf("%lld",ans);
    return 0;
}
