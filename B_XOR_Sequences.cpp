#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int x,y;cin>>x>>y;
    int i=0;
    for(;i<32;i++){
        if((x%(1<<i)) != (y%(1<<i))) break;
    }
    i--;
    cout<<(1<<i)<<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}