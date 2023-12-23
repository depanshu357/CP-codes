#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int lpos=0,rpos=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==v[0])count++;
        if(count==k){lpos=i;break;}
    }
    if(count<k){cout<<"NO\n";return;}
    count=0;
    for(int i=n-1;i>=0;i--){
        if(v[i]==v[n-1])count++;
        if(count==k){rpos=i;break;}
    }
    if(count<k){cout<<"NO\n";return;}
    if(lpos>=rpos && v[lpos]!=v[rpos]){cout<<"NO\n";return;}
    else cout<<"YES\n";
    return;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}