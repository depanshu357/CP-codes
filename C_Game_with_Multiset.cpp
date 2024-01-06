#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m;
    cin >> m;
    vector<int> index(30, 0);
    while (m--)
    {
        int t, v;
        cin >> t >> v;
        if(t==1){
            index[v]++;
        }else{
            bool flag = true;
            for(int i=29;i>=0;i--){
                int temp = min((v>>i),index[i]);
                v -= temp*(1<<i);
            }
            if(v) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}