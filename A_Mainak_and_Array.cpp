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
        int arr[n], min = 1000, maxmain= 0, minpos=0, maxpos=0, maxdiff = 0,max1=0,max2=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= maxmain)
            {
                maxmain= arr[i];
                maxpos = i;
            }
            if (arr[i] <= min)
            {
                min = arr[i];
                minpos = i;
            }
        }
        max1=max(maxmain-arr[0],min-arr[0]);
        max2=max(-maxmain+arr[n-1],-min+arr[n-1]);
        for (int i = 0; i < n; i++)
        {
            if (i == n-1)
            {
                if ((arr[n-1] - arr[0]) > maxdiff)
                    maxdiff = arr[n-1]-arr[0];
            }
            else
            {
                if ((arr[i] - arr[i + 1]) > maxdiff)
                    maxdiff = (arr[i] - arr[i + 1]);
            }
        }
        if (minpos == 0)
        {
            cout << maxmain- min << endl;
        }
        else if ( maxpos == (n - 1))
        {
            cout << maxmain- min << endl;
        }
        else if(maxpos-minpos==(-1)){
            cout<<maxmain-min<<endl;
        }
        else
        {
            cout << max(max(max1,max2),maxdiff) << endl;
        }
    }
    return 0;
}