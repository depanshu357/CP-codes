#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    if(n==1) cout<<"Alice\n";
    else if(n==2) cout<<"Bob\n";
    else if(n==3) cout<<"Bob\n";
    else if(n==4) cout<<"Bob\n";
    else if(n%2==0){
        cout<<"Alice\n";
    }
    else cout<<"Alice\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}