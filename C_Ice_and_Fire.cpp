#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n-1;i++)cin>>s[i];
    int left = 0;
    int right = 0;
    int current =1;
    int current2 =1;
    // cout<<"1 ";
    // if(s[0]=='0'){current=1;}
    // else{current++;}
    // if(s[0]=='1'){current2=1;}
    // else{current2++;}
    for(int i=2;i<=n;i++){
        if(s[i-2]=='1')cout<<i-current<<" ";
        else{cout<<i-current2<<" ";}
        if(s[i-2]=='0'){current=1;}
        else{current++;}
        if(s[i-2]=='1'){current2=1;}
        else{current2++;}
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