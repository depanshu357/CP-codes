#include<iostream>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            int k=1;
            while(n/k!=0){
                  k=k*10;
            }
            if(k>1) k=k/10;
            cout<<(n-k)<<endl;
      }
      return 0;
}