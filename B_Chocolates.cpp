#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long max = 0;
    for (int i = 0; i < n; i++)
    {
        long long sum = arr[i];
        long long pre =arr[i];
        int flag = 1;
        if (i > 0)
        {   
            for (int j = i; j > 0; j--)
            {   
                if(pre==1 || pre==0) flag=0;
                if ((arr[j - 1] < pre) && flag == 1)
                    {sum += arr[j - 1];
                    pre=arr[j-1];}
                else if (((pre - 1) <= arr[j - 1]) && flag == 1)
                {   
                    sum += (pre - 1);
                    pre=pre-1;
                }
                else
                {
                    flag = 0;
                }
            }
        }
            // cout<<sum<<" ";/
        // cout<<endl;
        if (max < sum)
            max = sum;
            cout<<sum<<" ";
    }
    cout<<endl;
    cout << max;
}