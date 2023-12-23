#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;int m;cin>>m;
    int arr[m];for(int i=0;i<m;i++)cin>>arr[i];
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++)cin>>brr[i];
    vector<pair<int,int>> v;
    sort(arr,arr+m);
    sort(brr,brr+m);
    for(int i=0;i<m;i++){v.push_back({arr[i],brr[i]});}
    // sort(v.begin(),v.end());
    
    // for(int i=0;i<m;i++){cout<<v[i].first<<" "<<v[i].second<<" ";}
    int maxi = v[0].first ;
    for(int i=1;i<m;i++){
        int gap = v[i].first-v[i-1].second;
        if(gap>=0){maxi=max(maxi,gap);}
    }
    if(v[m-1].second<n){maxi=max((n+1-(v[m-1].second)),maxi);}
    if(maxi>0)
    cout<<maxi-1;
    else cout<<"0";
}
int main(){
    solve();
}
