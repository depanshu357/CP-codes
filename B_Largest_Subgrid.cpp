#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin >> n;
    vector<vector<int>> arr(n+1,vector<int>(n+1,0)) ;
    vector<vector<int>> sum(n+1,vector<int>(n+1,0)) ;
    // int sum[n + 1][n + 1];
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         arr[i][j] = 0;
    //         sum[i][j] = 0;
    //     }
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int m;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // sum[i][j] = sum[i][j-1]+arr[i][j];
            // sum[i][j] += sum[i-1][j];
            sum[i][j] = arr[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
    int l = 1;
    int r = n;
    int ans = 0;
    while (r >= l)
    {
        int mid = l + (r - l) / 2;
        int flag = 0;
        for (int i = mid; i <= n; i++)
        {
            for (int j = mid; j <= n; j++)
            {
                int totalSum = (sum[i][j] - sum[i - mid][j] - sum[i][j - mid] + sum[i - mid][j - mid]);
                if (totalSum > m)
                {
                    r = mid - 1;
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (!flag)
        {
            ans = max(mid, ans);
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}