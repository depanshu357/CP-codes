#include <bits/stdc++.h>
using namespace std;
long long totalCoins(long long sum[], long long n, long long d, long long k)
{
    long long ans = (d / k) * sum[k];
    if (d % k > n)
        ans += sum[n];
    else
        ans += sum[d % k];
    return ans;
}
void solve()
{
    long long n, c, d;
    cin >> n >> c >> d;
    long long arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int qsum=0;
    for(int i=0;i<n && i<d;i++){
        qsum+=arr[n-i-1];
    }
    // if (qsum >= c)
    // {
    //     cout << "Infinity" << endl;
    //     return;
    // }
    // if ((d)*arr[n-1] < c  )
    // {
    //     cout << "Impossible" << endl;
    //     return;
    // }
    long long sum[n + 1];
    sum[0] = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + arr[n - i];
    }
    long long l = 0, r = d +2 ;
    // long long k=r;
    // long long Total_coins = (d / k) * sum[k] + sum[(d % k)];
    // long long mid = (l+r)/2;
    while (r > l )
    {
        long long totalCoins = 0;
        long long m = l + (r - l +1) / 2;
        for (long long i = 0; i < d; i++)
        {
            if (i % m < n)
                totalCoins += arr[n- i % m-1];
        }
        if (totalCoins >= c)
        {
            l = m;
        }
        else
        {
            r = m- 1;
        }
        m= (l + r) / 2;
    }
    if(l==0){cout<<"Impossible\n";return;}
    if(r==d+2){cout<<"Infinity\n";return;}
    cout << l-1 << endl;
    return;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}