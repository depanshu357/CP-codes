#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int flag=1;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                if(!((s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G')))
                {
                    flag=0;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}