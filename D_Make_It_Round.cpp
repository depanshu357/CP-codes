#include <bits/stdc++.h>
using namespace std;
int Roundness(int x)
{
    int ans = 0;
    while (x % 10 == 0)
    {
        x /= 10;
        ans++;
    }
    return ans;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int ans;
    int zeroes = 1;
    while (n % 10 == 0)
    {
        zeroes *= 10;
        n = n / 10;
    }
    
    int tempans=1;
    int k = n, tempzeroes = zeroes;
    while (k % 5 == 0)
    {
        k = k / 5;
        tempzeroes *= 5;
    }
    int t = 1;
    while (t <= m)
    {
        t *= 2;
    }
    t /= 2;
    if (k == 1)
         tempans = t * tempzeroes * k;
    else
        tempans = 1;
    k=n,tempzeroes=zeroes;
    while(k%2==0){
        k/=2;
    }
    t =1;
    while(t<=m){
        t*=5;
    }
    t/=5;
    if(k==1)
    if(Roundness(zeroes*t*n)>Roundness(tempans))tempans=zeroes*t*n;
    if (n % 2)
    {
        while (m / 100)
    {
        m = m / 10;
        zeroes *= 10;
    }
        if (n % 5 == 0)
        {

            if ((m / 10) >= 2)
            {
                ans = (m / 20) * 20 * zeroes * n;
            }
            else if (m % 10 >= 2)
            {
                ans = (m / 2) * 2 * zeroes * n;
            }
            else if (m / 10)
            {
                ans = (m / 10) * 10 * zeroes * n;
            }
            else
            {
                ans = m * n * zeroes;
            }
            
        }
        else
        {
            if (m / 10)
            {
                ans = (m / 10) * 10 * zeroes * n;
            }
            else
            {
                ans = m * n;
            }
        }
    }
    else
    {
        // int zeroes = 1;
        while (m / 100)
        {
            m = m / 10;
            zeroes *= 10;
        }
        if (m / 10 >= 5)
        {
            ans = 50 * zeroes * n;
        }
        else if (m % 10 >= 5)
        {
            ans = (m / 5) * 5 * zeroes * n;
        }
        else if (m / 10 > 0)
        {
            ans = (m / 10) * 10 * zeroes * n;
        }
        else
        {
            ans = m * n * zeroes;
        }
    }
    if (Roundness(tempans) > Roundness(ans))
            {
                ans = tempans;
            }
    // cout << m << " " << n << " " << zeroes << " ";
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}