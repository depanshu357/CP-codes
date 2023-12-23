#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        int max = 0, maxpos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (max < arr[i])
            {
                max = arr[i];
                maxpos = i;
            }
        }
        int fig[maxpos + 1] = {0};
        int fighter = arr[0];
        int cpos = 0;
        int count = n;
        for (int i = 0; i < maxpos; i++)
        {
            if (fighter > arr[i + 1])
            {
                fig[cpos]++;
            }
            else
            {
                fig[i + 1]++;
                fighter = arr[i + 1];
                cpos = i + 1;
            }
            count--;
            if (count == 0)
            {
                for (int j = 0; j < q; j++)
                {
                    int a, b;
                    cin >> a >> b;
                }
            }
        }
    }
}