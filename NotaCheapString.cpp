#include<iostream>
#include<map>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            string s;
            int p;
            cin>>s;
            cin>>p;
            int arr[s.size()];
            int price=0;
            multimap<char,int> mp;
            for(int i=0;i<s.size();i++){
                  mp.insert(pair<char,int>(s[i],i));
                  price=price+int(s[i]-'a'+1);
            }
                  cout<<price<<" ";
            auto it= mp.rbegin();
                  
            while(price>p){
                 cout<<(it->first-'a'+1)<<" ";
                 price=price-int(it->first-'a'+1);
                 s[it->second]='0';
                 it--;
            } 
            for(int i=0;i<s.size();i++){
                  if(s[i]='0') continue;
                  else cout<<s[i];
            }
            cout<<endl;
      }
      return 0;
}