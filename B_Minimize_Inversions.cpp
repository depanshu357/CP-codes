#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool comp(pair<int,int> x,pair<int,int> y){
    if(max(x.first,x.second)==max(y.first,y.second)) return min(x.first,x.second) < min(y.first,y.second);
    else return max(x.first,x.second) < max(y.first,y.second);
}
void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(auto &e: a) cin>>e;
    for(auto &e: b) cin>>e;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) v[i]={a[i],b[i]};
    sort(v.begin(),v.end(),comp); 
    for(int i=0;i<n;i++) cout<<v[i].first<<" ";
    cout<<"\n";
    for(int i=0;i<n;i++) cout<<v[i].second<<" ";
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
    
}