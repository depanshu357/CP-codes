#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, m;
    cin >> n >> m;
    long long arr[n + 1], brr[m + 1];
    for (long long i = 1; i <= n; i++)
        cin >> arr[i];
    for (long long i = 1; i <= m; i++)
        cin >> brr[i];
    arr[0] = 0; 
    brr[0] = 0;
    sort(arr , arr + n + 1);
    // sort(brr , brr + m + 1);
    long long ans = 0;
        // for(long long i=n;i>=(m+1);i--){
        //     ans+=arr[i];
        // }
        for(int i=1;i<=m;i++){
            arr[1]=brr[i];
            sort(arr,arr+n+1);
        }
    for(int i=1;i<=n;i++){ans+=arr[i];}
    
    cout << ans << endl;
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