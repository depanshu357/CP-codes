#include<iostream>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            long long a,b,c;
            cin>>a>>b>>c;
            if(c<=a){
                  cout<<"-1 "<<b<<endl;
            }else if(c>a){
                  cout<<"1"<<" ";
                  if(c>=b*a){
                        cout<<"-1"<<endl;
                  }else{
                        cout<<b<<endl;
                  }
            }
      }
      return 0;
}