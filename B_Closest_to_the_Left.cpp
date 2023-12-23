#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n + 2];
    arr[0] = -1e9;
    arr[n + 1] = 1e9;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 0; i < k; i++)
    {
        int q;
        cin >> q;
        int l = 0, r = n;
        int ans = -1;
        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            // if (arr[mid] == q)
            // {
            //     l= mid+  1;
            //     flag = 1;
            //     continue;
            // }
            if (arr[mid] <= q)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
            cout<<l<<" "<<r<<" ";
        }
        if (flag)
            cout << r + 1 << endl;
        else
            cout << r << endl;
    }
}