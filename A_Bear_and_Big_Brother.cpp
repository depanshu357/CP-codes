#include<iostream>
using namespace std;
int main(){
      int a,b;
      cin>>a>>b;
      int i=1,t=3,d=2;
      while(a*t<b*d || a*t==b*d){
            i++;t=t*3;
            d=d*2;
      }
      cout<<i;
}