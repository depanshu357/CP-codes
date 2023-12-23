#include <stdio.h>
// void swap(char *x, char *y)
// {
//     char temp = *x;
//     *x = *y;
//     *y = temp;
// }
int main()
{
    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d\n", &n, &m);
        char arr[n * m];
        int count = 0;
        for (int j = 0; j < n * m; j++)
        {
            count++;
            scanf("%c", &arr[j]);
            //   printf("%c",arr[j]);
            if (count == m)
            {
                scanf("\n");
                count=0;
            }
        }
        for(int k=0;k<n;k++){
        for (int j = ((n * m) - 1); j > m-1; j--)
        {
            if (arr[j] == '.' && arr[j - m] == '*'){

                char king = arr[j];
                arr[j] = arr[j-m];
                arr[j-m]= king ;
            }
        }
        }
        // for (int j = 0; j < (n*m-m); j++)
        // {
        //     if (arr[j] == '*' && arr[j + m] == '.'){

        //         char king = arr[j];
        //         arr[j] = arr[j+m];
        //         arr[j+m]= king ;
        //     }
        // }
        int count1 = 0;
        for (int j = 0; j < n * m; j++)
        {
            printf("%c", arr[j]);
            count1++;
            if (count1 == m)
            {
                printf("\n");
                count1 = 0;
            }
        }
        printf("\n");
    }
    return 0;
}