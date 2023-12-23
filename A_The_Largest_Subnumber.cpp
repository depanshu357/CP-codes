#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll mod = 1e9 + 7;
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    ll xorVal = 0;
    ll maxXor = -1;
    string ans = "";
    ll sum = 0;
    for(int i=0;i<n;i++){
        xorVal = xorVal^(s[i]-'0');
    }
    ll f = 1;
    for(int i=n-1;i>=0;i--){
        xorVal^=(s[i]-'0');
        sum = (sum + (((s[i]-'0')%k)*f)%k);
        sum%=k;
        if(sum%k ==0 && s[i]!=0){
            // cout<<xorVal<<" K";
            if(xorVal >= maxXor){
                // cout<<"an ";
                maxXor = xorVal;
                ans = s.substr(i);
            }
        }
        f*=10;
        f%=k;
    }
    int t =0;
    while(t!= ans.size() && ans[t]=='0')t++;
    if(t==ans.size())cout<<"-1\n";
    else if(ans.size()==n)cout<<"-1\n";
    else if(ans=="")cout<<"-1\n";
    else cout<<ans.substr(t)<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}