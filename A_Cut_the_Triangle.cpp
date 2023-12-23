#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int flag1=0,flag2=0;
    if(x1==x2 || x2==x3 || x3==x1)flag1=1;
    if(y1==y2 || y2==y3 || y3==y1)flag2=1;
    if(flag1 &&  flag2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}