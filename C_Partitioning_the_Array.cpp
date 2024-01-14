#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> fact;
    for(int i=1;i<n;i++) if(n%i==0) fact.push_back(i);
    if(n==1){cout<<"1\n";return;}
    int ans = 1;
    int mini = INT_MAX;
    // for(int i=0;i<fact.size();i++) cout<<fact[i]<<" ";
    // cout<<":";
    for(int i=0;i<n;i++) mini = min(mini,v[i]);
    for(auto k : fact){
        int temp = n;
        for(int i=0;i<n-k-1;i++){
            if(v[i+k]!=v[k])
            // temp  = min(abs(v[i+k]-v[i]),temp);
            temp=abs(v[i+k]-v[i]);
        }
        vector<int> test;
        for(int i=1;i*i<=temp;i++){
            if(temp%i==0) {
                test.push_back(i);
                if(i!=n/i) test.push_back(n/i);
            }
        }
        for(auto m: test){
            if(m==1) continue;
            int flag = 0;
            for(int i=0;i<k;i++){
                for(int t=k+i;t<n;t+=k){
                    if((v[t]%m)!=(v[t-k]%m)){flag=1;break;}
                }
                if(flag) break;
            }
            if(flag==0) {
                // cout<<k<<" "<<m<<" ";
            ans++;break;}
        }
    }
    // cout<<":";
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}