#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int flag=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='a'){
            cout<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"-1";
}