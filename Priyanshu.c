#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
int q_count = 0;
int m_count = 0;
void swap(double *i, double *j)
{
    double k;
    k = *i;
    *i = *j;
    *j = k;
    return;
}

int partition(double *A, int i, int j)
{
    int start = i + 1, end = j;
    while (start < end)
    {
        q_count++;
        if (A[start] > A[i])
        {
            while (start < end)
            {
                q_count++;
                if (A[end] > A[i])
                    end--;
                else
                    break;
            }
            if (end > start)
            {
                swap(A + start, A + end);
                end--;
                start++;
            }
            else
                break;
        }
        else
        {
            start++;
        }
    }

    if (A[start] > A[i])
    {
        swap(A + start - 1, A + i);
        start = start - 1;
    }
    else
    {
        swap(A + start, A + i);
    }
    q_count++;

    return start;
}

void Quicksort(double *A, int l, int r)
{
    if (l < r)
    {
        int i = partition(A, l, r);
        if (i - 1 >= l)
            Quicksort(A, l, i - 1);
        if (i + 1 <= r)
            Quicksort(A, i + 1, r);
    }
    return;
}

double *Merge(double *A, double *C, int n, int l, int m)
{
    int i = n, j = l + 1, k = 0;
    while (i <= l && j <= m)
    {
        if (A[i] < A[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else
        {
            C[k] = A[j];
            k++;
            j++;
        }
        m_count++;
    }
    while (i <= l)
    {
        C[k] = A[i];
        k++;
        i++;
    }
    while (j <= m)
    {
        C[k] = A[j];
        k++;
        j++;
    }
    return C;
}

double *Msort(double *A, int i, int j)
{
    if (i < j)
    {
        int mid = (i + j) / 2;
        Msort(A, i, mid);
        Msort(A, mid + 1, j);
        double *C;
        C = (double *)malloc((j - i + 1) * sizeof(double));
        Merge(A, C, i, mid, j);
        for (int k = 0; k <= (j - i); k++)
        {
            A[k + i] = C[k];
        }
        free(C);
    }

    return A;
}

int main()
{
    int tota = 0;
    int count = 0;
    //FILE *fpt1;                            // file podoubleers
    //fpt1 = fopen("data10_xnew.csv", "w+"); // file containing total time for inserting number from 1 to multiples of 50,000
    //fprintf(fpt1, "n, comparisons_quick, compartisons_merge, time_quick, time_merge\n");
    int n = 20;
    srand((unsigned)time(NULL));
    double *A, *D;
    A = (double *)malloc(n * sizeof(double));
    D = (double *)malloc(n * sizeof(double));
    for (int i = 0; i < 1; i++)
    {
        int MAXRANGE = 10000;

        for (int i = 0; i < n; i++)
        {
            A[i] = ((double)rand() / (int)RAND_MAX) * MAXRANGE;
            D[i] = A[i];
        }
        m_count = 0;
        clock_t t1;
        clock_t time_taken1;
        t1 = clock();
        Msort(D, 0, n - 1);
        time_taken1 = (clock() - t1);
        double time_taken_merge = ((double)time_taken1 * 1000000) / (double)CLOCKS_PER_SEC;

        q_count = 0;
        clock_t t2;
        clock_t time_taken2;
        t2 = clock();
        Quicksort(A, 0, n - 1);
        time_taken2 = (clock() - t2);
        double time_taken_quick = ((double)time_taken2 * 1000000) / (double)CLOCKS_PER_SEC;
        // fprintf(fpt1, "%d, %d, %d, %lf, %lf\n", n, q_count, m_count, time_taken_quick, time_taken_merge);
        if (time_taken_quick > time_taken_merge)
            count++;
        for (int i = 0; i < n; i++)
        {
            printf("%lf ", A[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("%lf ", D[i]);
        }
        int kaps = 0;
        while (kaps < n && A[kaps] == D[kaps])
            kaps++;
        if (kaps == n)
            tota++;
    }
    free(A);
    free(D);
    printf("\n%d", tota);
    printf("\n%d\n", count);

    //fclose(fpt1);

    printf("finished");
    return 0;
}