#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int q;cin>>q;
    vector<int> v(n);for(int i=0;i<n;i++) cin>>v[i];
    vector<int> s = {31};
    while(q--){
        int x;cin>>x;
        if(s.back() > x){
            s.push_back(x);
        }
    }
    for(auto x: v){
        for(auto y: s){
            if(x%(1<<y) == 0){x |= (1<<y-1);}
        }
        cout<<x<<" ";
    }
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}