#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    n-=3;
    n-=1;
    int rem = n%3;
     if(rem ==2){
    cout<< abs(n/3)<<endl;
    }else {
        cout<< abs(n/3-1)<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}