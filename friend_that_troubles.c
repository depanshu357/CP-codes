#include <stdio.h>
int ans(char arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] == '.')
            count++;
    }
    return count;
}
int ans1(int arr[], int n, int x,char c)
{   int count =0;
    if(x!=n && x!=1){
    if(arr[x-1]==arr[x-2] && arr[x-1]=='.') count--;
    if(arr[x-1]==arr[x] && arr[x]=='.') count--;
    if(c=='.' && arr[x]=='.') count++;
    if(c=='.' && arr[x-1]=='.') count++;}
    else if(x==n) {
        if(arr[x-1]==arr[x-2] && arr[x-1]=='.') count--;
        if(c=='.' && arr[x-1]=='.') count++;
    }else if(x==1){
        if(arr[x-1]==arr[x] && arr[x-1]=='.') count--;
        if(c=='.' && arr[x]=='.') count++;
    }
    return count;
}
int main()
{
    int n, m;
    scanf("%d %d\n", &n, &m);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }
    scanf("\n");
    int count = ans(arr, n);
    for (int i = 0; i < m; i++)
    {
        int x;
        char c;
        scanf("%d %c\n", &x, &c);
        
        printf("%d\n", count + ans1(arr, n, x,c));
         arr[x - 1] = c;
    }
    return 0;
}