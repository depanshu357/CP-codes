#include<iostream>
#include<algorithm>
using namespace std;
int main(){
      int n;
      cin>>n;
      int pass=0;
      int maxa=0;
      while(n--){
            int a,b;
            cin>>a>>b;
            pass=pass-a+b;
            maxa=max(maxa,pass);
      }
      cout<<maxa;
      return 0;
}