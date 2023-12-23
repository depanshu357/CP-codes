#include <bits/stdc++.h>
using namespace std;
int arr[262144];
int is_sorted(int n){
    if(n==1) return 1;
    for(int i=0;i<n-1;i++){
        // cout<<"h "; 
        if(arr[i]>arr[i+1]) return 0;
    }
    // cout<<"yes"<<endl;
    return 1;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int solve(int l, int r)
{
    if (l>=r)
        return 0;
    // cout<<"activated "<<l<<" "<<r<<" ";
    int maxe = arr[l];
    int posmax = l;
    int posmin = l;
    int mine = arr[l];
    for (int i = l; i <= r; i++)
    {
        if (maxe < arr[i])
        {
            maxe = arr[i];
            posmax = i;
        }
        if (mine > arr[i])
        {
            mine = arr[i];
            posmin = i;
        }
    }
    int ans = 0;
    int mid = (l + r) / 2;
    if (posmin > posmax)
    {
        ans++;
        // cout<<"ok ";
        if(r-l==1){
            swap(&arr[l],&arr[r]);
        }else
        for (int i = 0; i <= mid - l; i++)
            swap(&arr[i + l], &arr[mid + i + 1]);
    }
    // for(int i=l;i<=r;i++) cout<<arr[i]<<" ";
    return (solve(l, mid) + solve(mid + 1, r) + ans);
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans =  solve(0, n - 1); 
    // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    // cout<<endl;
    if (is_sorted( n)){
        cout<<ans<<endl;
        // cout<<"h"<<endl;
    }
    else
        cout << "-1" << endl;
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