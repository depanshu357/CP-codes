#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int LCM(int x,int y){
    return (x*y)/gcd(x,y);
}
void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
    }else{
        int min = n-1;
        int ans = 1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                ans=n/i;
                break;
            }
        }
        cout<<ans<<" "<<n-ans<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}