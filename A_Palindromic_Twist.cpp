#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<n/2;i++){
            if(!(s[i]==s[n-1-i] || abs(s[i]-s[n-1-i])==2)){
                  flag=1;break;
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}