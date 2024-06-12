#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            // cout<<i<< " "<<j<<" ";
            s.push_back((j)%k + 'a');
        }
    }
    cout<<s<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}