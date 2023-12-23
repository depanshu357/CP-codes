#include<iostream>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            int a1,a2,a3;
            a1=n/3;a2=n/3;a3=n/3;
            if(n%3==2){
                  if(a3-1==0) {a3++;a1--;}
                  cout<<a1+1<<" "<<a2+2<<" "<<a3-1<<endl;

            }else if(n%3==1){
                  if(a3-2==0){a3++;a1--;}
                  cout<<a1+1<<" "<<a2+2<<" "<<a3-2<<endl;

            }else{
                  cout<<a1<<" "<<a2+1<<" "<<a3-1<<endl;

            }
            
      }
      return 0;
}