#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    char s[n];
    for (long long i = 0; i < n; i++)
        cin >> s[i];
    vector<int> v;
    long long ans = 1;
    long long count0=0,count1=0;
    v.push_back(s[0]);
    if(s[0]=='0')count0++;
    else count1++;
    long long ways=2;
    for (long long i = 1; i < n; i++)
    {
    if(s[i]=='0')count0++;
    else count1++;
        if(s[i]==s[i-1]){ans+=ways;ways*=2;ways%=998244353;ans%=998244353;}
        else{ans+=1;ways=2;ans%=998244353;}
    }
    cout<<ans<<endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}