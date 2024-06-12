#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using  namespace std;
void solve(){
    ll a,b,r;
    cin>>a>>b>>r;
    if(a<b) {swap(a,b);}
    ll index = 0;
    ll index2=0;
    ll one = 1;
    ll zero = 0;
    for(ll i=63;i>=0;i--){
        if( ((a>>i)&1) == ((b>>i)&1)) continue;
        else {
            index = i;
            if((a>>i)&1) break;
            else swap(b,a);
        }
        // if((a)&(one<<i)) {index=i;break;}
    }
    // for(ll i=63;i>=0;i--){
    //     if((b)&(one<<i)){index2=i;break;}
    // }
    // cout<<"K "<<index<<" "<<index2<<" ";
    for(ll i=index-1;i>=0;i--){
        // cout<<a<<" "<<b<<" "<<r<<" :";
        if((a&(one<<i)) && ((b&(one<<i))==zero)){
            if( (r - (one<<i)) >=0){ r -= (one<<i);a = (a^(one<<i));b = (b^(one<<i));}
        }
    }
    // for(ll i=index2-1;i>=0;i--){
    //     if((((a>>i)&1)==0) && (((b>>i)&1)==0)){
    //         if( r - (1<<i) >=0){ r-= (1<<i);b = b^(1<<i);}
    //     }
    // }
    cout<<a-b<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}