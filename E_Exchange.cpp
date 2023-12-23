#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n,a,b;
    cin>>n>>a>>b;
    if(a<=b){
        int ans=n/a;
        if(n%a)ans+=1;
        cout<<ans<<endl;
    }else{
        cout<<"1"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}