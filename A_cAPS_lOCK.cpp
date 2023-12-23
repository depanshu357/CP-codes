#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int flags=0;
    int flage=0;
        if(s[0]>='a' && s[0] <='z') flags++;
    for(int i=0;i<n;i++){
        if( s[i]>='A' && s[i]<='Z') flage++;
       
        // if(s[0]>='a' && s[0]<='z') s[0]=s[0]-'a'+'A';
    }
    if(flags==1 && flage==s.size()-1){
        s[0]=s[0]-'a'+'A';
        for(int i=1;i<n;i++){
            s[i]=s[i]+'a'-'A';
        }
    }else if(flage==s.size()){
        for(int i=0;i<n;i++){
            s[i]=s[i]-'A'+'a';
        }
    }
    cout<<s;
}