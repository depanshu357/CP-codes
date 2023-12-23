#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> arr;
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<'\n';
        for(int i=0;i<n;i++)
        cout<<"1 ";
        cout<<'\n';
    }else{
        if(k==1){
            cout<<"NO\n";
        }else{
            if(n%2==0){
                cout<<"YES\n";
                cout<<n/2<<'\n';
                for(int i=0;i<n/2;i++)
                cout<<"2 ";
                cout<<'\n';
            }else if(k>=3){
                cout<<"YES\n";
                cout<< 1 + (n-3)/2<<'\n';
                cout<<"3 ";
                for(int i=0;i<(n-3)/2;i++)
                cout<<"2 ";
                cout<<'\n';
            }else cout<<"NO\n";
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}