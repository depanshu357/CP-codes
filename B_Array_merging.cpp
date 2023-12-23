#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int maxCont = 0;
    vector<int> ca(2*n+1,0);
    vector<int> cb(2*n+1,0);
    int count =0 ;
    for(int i=0;i<n;i++){
        if(i==0 || (i>0 && a[i]==a[i-1])){
            count++;

        }else{
            ca[a[i-1]] = max(ca[a[i-1]],count);
            count =1;
        }
    }
    ca[a[n-1]] = max(ca[a[n-1]],count);
    count =  0;
    for(int i=0;i<n;i++){
        if(i==0 || (i>=0 && b[i]==b[i-1])){
            count++;
        }else{
            cb[b[i-1]] = max(cb[b[i-1]],count);
            count = 1;
        }
    }
    cb[b[n-1]] = max(cb[b[n-1]],count);
    ll ans =0;
    for(int i=0;i<= 2*n;i++){
        if(ans < ca[i] + cb[i]) ans = ca[i] + cb[i];
    }
    cout << ans << '\n';
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