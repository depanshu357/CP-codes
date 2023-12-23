#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int min = 1e9;
        // if (n == 3)
        // {
        //     min = abs(arr[0] - arr[1]) + abs(arr[1] - arr[2]);
        // }
        // else
        for (int i = 0; i < n - 2; i++)
        {
            // cout << i << " ";
            if (min > abs(arr[i] - arr[i + 1]) + abs(arr[i + 2] - arr[i + 1]))
                min = abs(arr[i] - arr[i + 1]) + abs(arr[i + 2] - arr[i + 1]);
        }
        cout << min << endl;
    }
}