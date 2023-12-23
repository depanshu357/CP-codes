#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    if (b > a)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    return gcd(b, a % b);
}
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
            cin >> arr[i];
        if (n == 1)
            cout << "YES" << endl;
        else
        {
            int newarr[n + 1];
            newarr[0] = arr[0];
            for (int i = 1; i <n; i++)
            {
                newarr[i] = ((arr[i] * arr[i - 1]) / gcd(arr[i - 1], arr[i]));
                // cout<<gcd(arr[i-1],arr[i])<<" ";
                // cout<<newarr[i]<<endl;
            }
            newarr[n]=arr[n-1];
            int checkarr[n];
            for (int i = 0; i < n; i++)
            {
                checkarr[i] = gcd(newarr[i], newarr[i + 1]);
            }
            int flag = 1;
            for (int i = 0; i < n; i++)
            {
                if (checkarr[i] != arr[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}