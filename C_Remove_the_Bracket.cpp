#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
long long N = 1e5+ 1;
long long dp1[int(2e5+1)];
long long dp2[int(2e5+1)];
long long x[int(2e5+1)],y[int(2e5+1)];
void solve(){
    long long n,s;cin>>n>>s;
    for(long long i=1;i<=n;i++){
        long long j;cin>>j;
        if(i==1 || i==n){x[i]=j;y[i]=j;}
        else if(j<=s){x[i]=0;y[i]=j;}
        else{x[i]=s;y[i]=j-s;}
    }
    dp1[1] = 0;dp2[1]=0;
    for(long long i=2;i<=n;i++){
        dp1[i] = min(dp1[i-1]+ y[i-1]*x[i],dp2[i-1]+x[i-1]*x[i]);
        dp2[i] = min(dp1[i-1]+ y[i-1]*y[i],dp2[i-1]+ x[i-1]*y[i]);
    }
    cout<<dp1[n]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;cin>>t;
    while(t--)solve();
}