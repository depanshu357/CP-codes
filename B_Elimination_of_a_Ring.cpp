#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int diffele=0;
    int check[101];
    for(int i=0;i<=101;i++){check[i]=0;}
    for (int i = 0; i < n; i++)
    {
    cin >> arr[i];
    check[arr[i]]++;
    if(check[arr[i]]==1)diffele++;
    }   
    if(n<=3){
        cout<<n<<endl;
    }else{
        if(diffele==2){
            cout<<(n/2+1)<<endl;
        }else{
            cout<<n<<endl;
        }
    }
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