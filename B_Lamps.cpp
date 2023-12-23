#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.first == b.first){
        return a.second > b.second;
    }else return a.first < b.first;
}
void solve(){
    ll n;cin>>n;
    vector<pair<int,int>> v;
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),comp);
    // for(ll i=0;i<n;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<" ";
    // }
    ll on = 0;
    ll points = 0;
    ll i =0;
    queue<int> q;
    while(i<n){
        if(v[i].first > on){
            points += v[i].second;
            on++;
            // i++;
            // cout<<v[i].second<<" ";
            q.push(v[i].first);
        }
        if(q.front() <= on){
            if(v[i].first <= on){
                while(i< n && v[i].first <= on) i++;
            }else i++;
            while(!q.empty() && q.front() <= on) {q.pop();}
            on = q.size();
        }else i++;
    }
    cout<<points<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}