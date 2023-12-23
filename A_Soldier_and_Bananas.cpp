#include<iostream>
using namespace std;
int main(){
      int k,n,w;
      cin>>k>>n>>w;
      int sum = ((w*(w+1))*k/2)-n;
      if(sum<0) cout<<"0";
      else cout<<sum;

      return 0;
}