#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    int arr[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a;
        cin >> a;
        v[a]++;
        arr[i + 2] = a;
    }
    for (int j = 1; j <= n; j++)
    {
        if(v[j]){
            // cout<<"a ";
        int count =0;
        for (int i = 1; i <= n; i++)
        {
            if(arr[i]==j && v[i]==0)count++;
        }
        if(count<3){cout<<"No\n";return 0;}
        }
    }
    cout << "Yes\n";
    return 0;
}