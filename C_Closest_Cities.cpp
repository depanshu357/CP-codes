#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int m;cin>>m;
    vector<int> clos(n);
    for(int i=0;i<n;i++){
        if(i==0) clos[i] = 1;
        else if(i==n-1) clos[i] = n-2;
        else if(v[i]-v[i-1] > v[i+1]-v[i]) clos[i] = i+1;
        else clos[i] = i-1;
    }
    vector<int> pre(n+1,0),suf(n+2,0);
    for(int i=1;i<n;i++){
        if(clos[i-1]==i) pre[i] = 1;
        else pre[i] += (v[i]-v[i-1]);
        pre[i] += pre[i-1];
    }
    for(int i=n;i>1;i--){
        if(clos[i-1]==i-2) suf[i] = 1;
        else suf[i] += (v[i-1]-v[i-2]);
        suf[i] += suf[i+1];
    }
    // for(int i=0;i<=n;i++) cout<<pre[i]<<" ";
    // cout<<":";
    // for(int i=0;i<=n;i++) cout<<suf[i]<<" ";
    // cout<<":";
    for(int i=0;i<m;i++){
        int ai,bi;
        cin>>ai>>bi;
        if(ai<bi){
            cout<<-pre[ai-1]+pre[bi-1]<<"\n";
        }else{
            cout<<-suf[ai+1]+suf[bi+1]<<'\n';
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}