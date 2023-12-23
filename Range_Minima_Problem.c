#include <stdio.h>
void process(int *Log, int *Power_of_2, int n, int *A)
{
    for (int i = 0; i <= n; i++)
    {
        int j = 1;
        int count = 0;
        while (j <= i)
        {
            j = j * 2;
            count++;
        }
        Power_of_2[i] = j / 2;
        Log[i] = count - 1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int Power_of_2[n];
    int Log[n];
    process(Log, Power_of_2, n, A);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d\n", Power_of_2[i], Log[i]);
    // }
    int k = 0, m = 1;
    while (m < n)
    {
        m = m * 2;
        k++;
    }
    int C[n][k];
    for (int j = 0; j < n - 1; j++)
    {
        if (A[j] < A[j + 1])
            C[j][0] = A[j];
        else
            C[j][0] = A[j + 1];
            // printf("%d ",C[j][0]);
    }
    // printf("\n");
    int two = 2;
    int counttwo=3;
    for (int i = 1; i < k; i++)
    {
        for (int j = 0; j < n - counttwo && counttwo <= n; j++)
        {
            if (C[j][i - 1] < C[j + two][i - 1])
                C[j][i] = C[j][i - 1];
            else
                C[j][i] = C[j + two][i - 1];
            // printf("%d ",C[j][i]);
        }
        // printf("\n");
        two = two * 2;
        counttwo+=two;
    }
    // for(int i=0;i<k;i++){
    //     for(int j=0;j<n-i;j++){
    //         printf("%d ",C[j][i]);
    //     }
    //     printf("\n");
    // }
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        int L = j - i + 1;
        int t = Power_of_2[L];
        int k = Log[L];
        // printf("%d %d\n",t,k);
        if(t==L){
            printf("%d\n",C[j][k-1]);
        }else{
            if(C[i][k]<C[j-t+1][k-1]) printf("%d\n",C[i][k-1]);
            else printf("%d\n",C[j-t+1][k-1]);
        }
    }
    return 0;
}