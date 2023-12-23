#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    long long xa,ya;
    long long xb,yb;
    long long xc,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    xb = xb - xa ;
    yb = yb - ya ;
    xc = xc - xa ;
    yc = yc - ya ;
    if(xb*xc >=0 && yb*yc >=0){

        long long ans = (min(abs(xb),abs(xc)) + min(abs(yb),abs(yc))) + 1;
        cout<<ans<<'\n';
        return;
    }else if(xb*xc >=0 && yb*yc <0){
        cout<<min(abs(xb),abs(xc)) + 1<<'\n';
    }else if(xb*xc<0 && yb*yc>=0){
        cout<<min(abs(yb),abs(yc)) + 1<<'\n';
    }else cout<<"1\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;cin>>t;
    while(t--)solve();
}