#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> arr;
    for (int i = 0; i < n; i++)
    {
        long long k;
        cin >> k;
        arr.push_back(k);
    }
    int team_size, k;
    cin >> team_size >> k;
    long long sum = 0;
    cout << team_size << " " << k << endl;
    if (k >= n)
    {
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum;
    }
    else
    {
        long long max = 0;
        int max_pos = 0;
        int flag = 0;
        for (int i = 0; i < team_size; i++)
        {
            auto it = arr.begin();
            for (int j = 0; j < k; it++, j++)
            {
                if (max < *it)
                {
                    max_pos = j;
                    max = *it;
                }
            }
            auto rit = arr.rbegin();
            for (int j = 0; j < k; j++, rit++)
            {
                if (max < *rit)
                {
                    max_pos = n - 1 - j;
                    max = *rit;
                    flag = 1;
                }
            }
            it = arr.begin();
            sum += (*(it + max_pos));
            cout << *(it + max_pos) << " ";
            arr.erase(it + max_pos);
            // cout<<sum<<" ";
            // cout << *rit << endl;
        }
        cout << sum;
    }
}
