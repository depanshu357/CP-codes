#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,r,x;
    int a,b;
    cin>>l>>r>>x;
    cin>>a>>b;
    if(b<a){
        int temp = a;
        a=b;
        b=temp;
    }
    if(a==b){
        cout<<"0"<<endl;
        return;
    }
    if(b-a>=x){
        cout<<"1"<<endl;
        return;
    }
    if(a-l>=x || r-b>=x){
        cout<<"2"<<endl;
        return;
    }
    if(x+a<=r && b-l>=x){
        cout<<"3"<<endl;
        return;
    }
    if(b-x>=l && r-a>=x){
        cout<<"3"<<endl;
        return;
    }
    cout<<"-1"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}