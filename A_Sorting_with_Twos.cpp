#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    int m = pow(2,(int)log2(n));
    // cout<<m<<" ";
    for(int i=m+1;i<=n-1;i++){
        if(v[i]>v[i+1]){cout<<"NO\n";return ;} 
    }
    int st = 0,end = 1;
    while(end <= m){
        for(int i = st;i<=end-1;i++){
            if(v[i]>v[i+1]){cout<<"NO\n";return;}
        }
        st = end+1;
        end = end*2;
    }
    cout<<"YES\n";return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}