#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,x;cin>>n>>x;
    vector<pair<int,int>> a(n);
    vector<int> b(n),mp(n);
    for(int i=0;i<n;i++){
        int t;cin>>t;
        a[i] = {t,i};
    }
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end(),greater<pair<int,int>>());
    sort(b.begin(),b.end());
    int index = 0;
    for(;index<x;index++ ){
        mp[a[index].second] = b[x-index-1];
    }
    for(int i=0;i<n && index<n;i++,index++){
        mp[a[index].second] = b[n-1-i];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i].first > mp[a[i].second]) count++;
    }
    if(count!=x){cout<<"NO\n";return;}
    cout<<"YES\n";
    for(auto t: mp)cout<<t<<" ";
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}