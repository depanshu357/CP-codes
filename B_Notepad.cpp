#include<bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    char strings[n];
    string s[n/2];
    for(int i=0;i<n;i++){
        cin>>strings[i];

    }
    int flag=0;
    for(int i =0;i<n-2;i++){
        for(int j=i+2;j<n-1;j++){
            if(strings[i]==strings[j]){
                if(strings[i+1]==strings[j+1]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag)break;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}