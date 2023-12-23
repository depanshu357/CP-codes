#include<iostream>
using namespace std;
int main(){
      long long n;
      cin>>n;
      int lct=0,tct=0;
      while(n!=0){
            int a;
            a=n%10;
            if(a==4 || a==7) lct++;
            tct++;
            n=n/10;
      }
      // cout<<lct<<" "<<tct<<" ";
      // if(lct==tct) cout<<"YES";
       if(lct==4 || lct==7) cout<<"YES";
      else cout<<"NO";
      return 0;
}