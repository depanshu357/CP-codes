#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll k;
    cin >> k;
    vector<int> dp(n);
    // for(int i=0)
    dp[0] = arr[0];
    map<int,int> st;
    st[dp[0]] = 0;
    for (int i = 1; i < n; i++)
    {
        // for(int j=i-1;j>=0 && j>=i-k;j--){
        //      if(arr[j]>=0){maxi =   max(maxi,arr[i] + dp[j]);break;}
        //      maxi =   max(maxi,arr[i] + dp[j]);
        // }

        if (i > k)
        {   

            st.erase(dp[i - k - 1]);
        }
        dp[i] = (st.rbegin())->first + arr[i];
        st[dp[i]] = i;
    }
    //  calculate(arr[n-1],arr,n-1,k,dp);
    cout << dp[n - 1] << '\n';
}