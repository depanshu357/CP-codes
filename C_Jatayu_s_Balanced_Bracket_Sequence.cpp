#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    char c[2*n];
    for(int i=0;i<2*n;i++){
        cin>>c[i];
    }
    int count=1;
    for(int i=0;i<2*n-1;i++){
        if(c[i]=='(' && c[i+1]=='('){
            count++;
        }
    }
    cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}