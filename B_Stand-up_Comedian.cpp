#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    long long a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    long long ans = 0;
    ans +=(a1);
    if(a1==0 && (a2>0 || a3>0)){cout<<'1'<<endl;return;}
    ans += (2*min(a2,a3));
    // cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" ";
    // cout<<min(a2,a3)<<" ";
    long long k = min(a2,a3);
    a2= a2 - k;
    a3 = a3 -k;
    // cout<<a2<<" "<<a3<<" ";

    long long extra = abs(a3-a2) + a4;
    // cout<<extra<<" ";
    if(extra>a1){ans++;}
    ans += (min(a1,extra));
    // long long rem = abs(a2-a3);
    // rem += a4;

    // if(rem==a1){
    //     ans +=rem;
    // }
    // else if(rem>a1){
    //     ans += a1;
    //     ans +=1;
    // }
    // else {
    //     ans = a1 + a2 + a3 +a4;
    // }

    // if( a1 >= rem){
    //     ans += (rem);
    //     rem= a1-rem;
        
    // }else{
    //     ans+=(a1);
    //     ans+=1;
    // }
    // if(rem>=a4){ans+=a4;}
    //     else{ans += rem;
    //     ans+=1;}
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;cin>>t;
    while(t--)solve();
}