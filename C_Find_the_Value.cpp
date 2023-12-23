#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
void merge(vector<pair<ll,ll>> &v,vector<ll> &ans,ll l,ll mid,ll r){
    vector<pair<ll,ll>> t;
    ll st1 = l,st2 = mid+1;
    while(st1 < mid+1 && st2 <= r){
        if(v[st1].first > v[st2].first){
            ans[v[st1].second] += (r - st2 + 1);
            t.push_back(v[st1++]);

        }else t.push_back(v[st2++]);
    }
    while(st1<mid+1){
        t.push_back(v[st1++]);
    }
    while(st2<=r){
        t.push_back(v[st2++]);
    }
    for(ll i=l;i<=r;i++) v[i] = t[i-l];

}
void mergeSort(vector<pair<ll,ll>> &v,vector<ll> &ans,ll l,ll r){
    if(l<r){
        ll mid = (l+r)/2;
        mergeSort(v,ans,l,mid);
        mergeSort(v,ans,mid+1,r);

        merge(v,ans,l,mid,r);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;cin>>n;
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++) cin>>arr[i];
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++) v[i] = {arr[i],i};
    vector<ll> ans(n,0);
    mergeSort(v,ans,0,n-1);
    ll sum = 0;
    for(auto it: ans){
        sum+= it;
        // cout<<it<<" ";
    } 
    cout<< sum;
}