#include<bits/stdc++.h>
using namespace std;
int isBeautiful(int r11,int r12,int r21,int r22){
    if(r12>r11 && r22>r21 && r22>r12 && r21>r11){
        return 1;
    }else return 0;
}
void solve(){
    int r11,r12,r21,r22;
    cin>>r11>>r12>>r21>>r22;
    if(isBeautiful(r11,r12,r21,r22) || isBeautiful(r21,r11,r22,r12) || isBeautiful(r22,r21,r12,r11) || isBeautiful(r12,r22,r11,r21)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}