#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
      string s;
      cin>>s;
      map<char,int> mp;
      for(int i=0;i<s.size();i++){
           if(mp.find(s[i])==mp.end()){
            mp[s[i]]=1;
           }
      }
      if(mp.size()%2==0){
            cout<<"CHAT WITH HER!";
      }else{
            cout<<"IGNORE HIM!";
      }
      
}