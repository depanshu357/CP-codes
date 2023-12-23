#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a = 1 ,b =  -1;
    if (n % 2 == 1){

        if(n==3){cout<<"NO\n";return ;}
        int flag=0;
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            if(i%2){cout<<n/2<<" ";}
            else{cout<<-(n/2-1)<<" ";}
        }
        cout<<endl;
    }

    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
                cout << a;
            else
                cout << b;
            if(i!=n-1)cout<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}