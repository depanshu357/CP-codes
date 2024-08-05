#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int counta = 0, countb =0, countc = 0, countd = 0;
    for(int i=0;i<4*n;i++){
        char c;cin>>c;
        if(c=='A') counta++;
        else if(c=='B') countb++;
        else if(c=='C') countc++;
        else if(c=='D')countd++;
    }
    int sum = min(counta,n) + min(countb,n) + min(countc,n) + min(countd,n);
    cout<<sum<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}