#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag =0;
    for(int i=0;i<n-1;i++){
       char a,b;
       if(s[i+1]!=s[i]) {cout<<"YES"<<endl<<s[i]<<s[i+1]<<endl;flag=1;break;}
    }
    if(flag==0){
        cout<<"NO";
    }
}