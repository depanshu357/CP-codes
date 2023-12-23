#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}