#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=1e9;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])continue;
        if(arr[i]<arr[i+1]){right=min(right,((arr[i]+arr[i+1])/2));}
        else {
            int roundUp = ceil(((double)(arr[i]+arr[i+1]))/(double)2);
            left=max(left,roundUp);}
    }
    if(right<left){cout<<"-1\n";}
    else{cout<<left<<endl;}

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