#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    arr[0] = -1e9;
    arr[n + 1] = 1e9;
    for (int i = 0; i < k; i++)
    {
        int num;
        cin >> num;
        int l = 0;
        int r = n + 1;
        if(arr[n]<num) cout<<n+1<<endl;
        else{
        while (l + 1 < r)
        {
        int mid = (l + r) / 2;

            if (arr[mid] > num)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        if(arr[r-1]==num) cout<<r-1<<endl;
         else cout << r << endl;
        }
    }
}