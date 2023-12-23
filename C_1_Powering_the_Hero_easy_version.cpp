#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
        multiset<int,greater<int>> s;
        ll ans=0;
    for(ll i=0;i<n;i++){
        ll num;cin>>num;
        if(num!=0){
            s.insert(num);
            // cout<<s.size()<<" ";
        }else{
            auto it = s.begin();
            if(it!=s.end()){
                ans += (*it);
                s.erase(it);
            }
        }
    }
    cout<<ans<<endl;
}
int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}