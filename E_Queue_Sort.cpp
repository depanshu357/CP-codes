#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    int miniIndex = 0;
    int ele = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(ele > v[i]){
            ele = v[i];
            miniIndex = i;
        }
    }
    for(int i=miniIndex;i<n-1;i++){
        if(v[i]>v[i+1]){cout<<"-1\n";return;}
    }
    cout<<miniIndex<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}