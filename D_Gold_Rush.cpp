#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool find(int n,int m){
    if(n==m) return true;
    if(n%3!=0) return false;
    int a = (n/3);
    int b = 2*a;
    return find(a,m) || find(b,m);
}
void solve(){
    int n,m;cin>>n>>m;
    if(n<m){
        cout<<"NO\n";
        return ;
    }
    if(find(n,m)) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}