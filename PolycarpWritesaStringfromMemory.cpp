#include<iostream>
#include<string>
// #include<map>
#include<vector>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            string s;
            cin>>s;
            int n= s.size();
            // cout<<s<<" "<<n<<" ";
            // map<char ,int> mp;
            int pos=0;
            while(pos!=n){
                  int grp =0;
                  while(grp!=3 || pos!=n){
                        char a,b,c;
                        a=s[pos];pos++;grp++;
                        while(s[pos]==a ||pos =n)pos++;
                        b= 


                  }
            }
           
      }
      return 0;
}