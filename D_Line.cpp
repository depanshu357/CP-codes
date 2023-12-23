#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int l=0,r=n-1;
      for(int i=0;i<n;i++){
           while(s[l]!='L' && l<n/2){
                 l++;
           }
           while(s[r]!='R' && l<n/2){
            r++;
           }
           if((n-r)>(l)){
             
           }
      }
    }
}