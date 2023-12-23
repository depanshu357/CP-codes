#include<iostream>
using namespace std;
int main(){
      int n;
      cin >>n;
      if(n==1) {cout<<"1";return 0;}
      else if(n<=3){cout<<"NO SOLUTION";return 0;}
      else if(n%2==0){
          for(int i=0;i<(n/2);i++){
              cout<<(2*i+2)<<" ";
          }
          for(int i=0;i<(n/2);i++){
              cout<<(2*i+1)<<" ";
          }
      }else{
          for(int i=0;i<(n/2);i++){
              cout<<(2*i+2)<<" ";
          }
          for(int i=0;i<(n/2)+1;i++){
              cout<<(2*i+1)<<" ";
          }
      }

    return 0;
}