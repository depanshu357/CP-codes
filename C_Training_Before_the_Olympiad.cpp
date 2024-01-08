#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<int> v(n);
    ll sum = 0;ll odds = 0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)odds++;
        sum+=v[i];
        if(i==0){cout<<v[i]<<" ";continue;}
        if(i==1){cout<<(sum/2)*2<<" ";continue;}
        if(odds%3==0) cout<<sum-odds/3<<" ";
        else if(odds%3==1) cout<< sum - odds/3 - 1<<" ";
        else cout<<sum - odds/3 << " ";
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}