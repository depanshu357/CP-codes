#include<iostream>
using namespace std;
void PrintBinary(int n){
      for(int i=10;i>=0;i--){
            cout<<((n>>i)&1);
      }
      cout<<endl;
}
int main(){
      int n;
      cin>>n;
      PrintBinary(n);
      int i;
      cin>>i;
      if(n&(1<<i)){
          cout<<i<<"th Bit is set";
      }else{
            cout<<i<<"th Bit is unset";
      }
      cout<<endl;
      //bit set
      PrintBinary(n | (1<<i));
      //bit unset
      PrintBinary( n & ~(1<<3));
      // toggle bit
      PrintBinary( n  ^ ( 1<<5));
      //no of set bits
      int count=0;
      for(int i=10;i>=0;i--){
            if(n&(1<<i)){
              count++;
            }
      }
      cout<<count<< endl; 
      cout<<__builtin_popcount(n)<<endl;
      cout<<__builtin_popcountll((1LL<<35)-1)<<endl;
      return 0;
}