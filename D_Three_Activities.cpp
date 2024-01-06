#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
vector<pair<ll,ll>> findMax(vector<ll> &a){
    vector<pair<ll,ll>> temp(3,{0,0});
    for(ll i=0;i<a.size();i++){
        if(a[i]>=temp[0].first){
            temp[2] = temp[1];
            temp[1] = temp[0];
            temp[0] = {a[i],i};
        }else if(a[i]>=temp[1].first){
            temp[2] = temp[1];
            temp[1] = {a[i],i};
        }else if(a[i]>=temp[2].first){
            temp[2] = {a[i],i};
        }
    }
    return temp;
}
void solve(){
    ll n;cin>>n;
    vector<ll> a(n),b(n),c(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++) cin>>c[i];
    vector<pair<ll,ll>> topA(3,{0,0}),topB(3,{0,0}),topC(3,{0,0});
    topA = findMax(a);
    topB = findMax(b);
    topC = findMax(c);
    ll maxi = 0;
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            for(ll k=0;k<3;k++){
                ll index1 = topA[i].second;
                ll index2 = topB[j].second;
                ll index3 = topC[k].second;
                if(index1!=index2 && index2!=index3 && index1!=index3){
                    maxi = max(maxi,topA[i].first + topB[j].first + topC[k].first);
                }
            }
        }
    }
    cout<<maxi<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}