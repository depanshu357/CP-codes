#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    if(n%2){
        for(int i =0;i<n;i++)cout<<i+1<<" ";
        
    }else for(int i=0;i<n;i++)cout<<2*(i+1)<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}