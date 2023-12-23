#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int flag = 0;
    if (n % 2 == 0)
        flag = 0;
    else
        flag = 1;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x < arr[0])
        {
            if (flag)
                cout << "NEGATIVE" << endl;
            else
                cout << "POSITIVE" << endl;
        }
        else if (x > arr[n - 1])
        {
            cout << "POSITIVE" << endl;
        }
        else
        {
            int l = 0;
            int r = n - 1;
            int mid = (0 + n - 1) / 2;
            while (r > l)
            {
                if (x > arr[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
                mid = (l + r) / 2;
            }
            // cout<<mid<<" " <<endl;
            if (arr[mid] == x || arr[(mid + 1) % n] == x)
            {
                cout << "0" << endl;
            }
            else
            {
                if ( x > arr[mid])
                {
                    if (flag == 0)
                    {
                        if (mid % 2)
                            cout << "POSITIVE" << endl;
                        else
                            cout << "NEGATIVE" << endl;
                    }
                    else
                    {
                        if (mid % 2 == 0)
                            cout << "POSITIVE" << endl;
                        else
                            cout << "NEGATIVE" << endl;
                    }
                }else{
                    if (flag == 1)
                    {
                        if (mid % 2)
                            cout << "POSITIVE" << endl;
                        else
                            cout << "NEGATIVE" << endl;
                    }
                    else
                    {
                        if (mid % 2 == 0)
                            cout << "POSITIVE" << endl;
                        else
                            cout << "NEGATIVE" << endl;
                    }
                }
            }
        }
    }
}