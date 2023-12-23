#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
      int n,m;
      cin>>n>>m;
      scanf("\n");
      string help=";";
      vector<string> ser(n);
      vector<string> ip(n);
      vector<string> com(m);
      for(int i=0;i<n;i++){
          cin>>ser[i];scanf(" ");
          cin>>ip[i];scanf("\n");
          ip[i]=ip[i]+help;

      }
      string test;
      for(int i=0;i<m;i++){
           cin>>com[i];scanf(" ");
           cout<<com[i]<<" ";
           cin>>test;scanf("\n");
           cout<<test<<" ";
           for(int i=0;i<n;i++){ 
            if(!test.compare(ip[i])){
                  cout<<"#"<<ser[i]<<"\n";
            // break;
            }
           }
      }
      return 0;
}