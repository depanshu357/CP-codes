#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{

}
ll solveMem(vector<ll> &weight, vector<ll> &value, ll index, ll capacity, vector<vector<ll>> &dp)
{
    if (index < 0 )
    {
    //     if (weight[0] <= capacity)
    //         return value[0];
    // else
        return 0;
    }
    if(dp[index][capacity]!=-1){
        return dp[index][capacity];
    }
    ll include = 0;
    if (weight[index] <= capacity)
        include = value[index] + solveMem(weight, value, index - 1, capacity - weight[index], dp);
    ll exclude = 0 + solveMem(weight, value, index - 1, capacity, dp);
    dp[index][capacity] = max(exclude, include);
    return dp[index][capacity];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ll t;cin>>t;
    // while(t--)solve();
    ll n;
    cin >> n;
    vector<ll> weight(n);
    vector<ll> value(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> value[i];
        // value[i] = value[i];
    }
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> weight[i];
        weight[i] = 2*weight[i];
    }
    ll maxWeight;
    cin >> maxWeight;
    vector<vector<ll>> dp(n+1, vector<ll>(maxWeight + 1, -1));
    cout << solveMem(weight, value, n - 1, maxWeight, dp) << '\n';

    // for(ll w = weight[0];w<=maxWeight;w++){
    //     if(weight[0]<=maxWeight)
    //     dp[0][w] = value[0];
    //     else dp[0][w] = 0;
    // }

    // for(ll i =1;i<n;i++){
    //     for(ll w = 0;w<=maxWeight;w++){
    //         ll include = 0;
    //         if(weight[i]<=w){
    //             include = value[i] + dp[i-1][w - weight[i]];
    //         }
    //         ll exclude = dp[i-1][w];
    //         dp[i][w] = max(include,exclude);
    //     }
    // }
    // cout<<dp[n-1][maxWeight];
}