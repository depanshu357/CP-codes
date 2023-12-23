#include<bits/stdc++.h>
using namespace std;
long long luxury(long long x){
    long long k=1;
    long long  l =1,r = 1e9+7;
    while(r>l){
        long long mid = l + (r-l+1)/2;
        if(mid*mid<=x){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    long long ans = l*3-3;
    if(l*(l+1)<=x)ans++;
    if(l*(l+2)<=x)ans++;
    if(l*l<=x)ans++;
    return ans;
}
void solve(){
    long long a,b;
    cin>>a>>b;
    long long ans = luxury(b)-luxury(a-1);
    cout<<ans<<endl;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}