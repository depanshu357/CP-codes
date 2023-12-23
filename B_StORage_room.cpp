#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<vector<int>> v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    vector<int> a(n,0);
    if(n==1){cout<<"YES\n0\n";return;}
    for(int i=0;i<n;i++){
        int temp = v[i][0];
        if(i==0) temp=v[i][1];
        for(int j=0;j<n;j++){
            if(i!=j){
                temp = temp&v[i][j];
            }
        }
        a[i] = temp;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && (int(a[i]|a[j]) != v[i][j])){
                cout<<"NO\n";
                // cout<<i<<" "<<j<<"\n";
                return;
                // break;
            }
            // cout<<(a[i]|a[j])<<" ";
        }
        // cout<<'\n';
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}