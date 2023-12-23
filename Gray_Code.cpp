#include<bits/stdc++.h>
using namespace std;

void graycode(int n){
      if(n==0){cout<<endl;return ;}
      cout<<'0';
      graycode(n-1);
      cout<<'1';
      graycode(n-1);
}

void convertToGray(int a[],int n){
      for(int i=n-1;i>=0;i--){
            if(i==n-1)cout<<a[n-1];
            else cout<<(a[i]^a[i+1]);
      }
      cout<<endl;
}
void convertDecimalToBinary(int t,int n ){
      int num[n]={0};
      int i=0;
     while(t!=0){
       int rem = t%2;
       t= t/2;
       num[i++]=rem;
     }
//      while(n--){
//       cout<<num[n];
//      }
//      cout<<endl;
 convertToGray(num,n);
}
int main()
{
      int n;
      cin >> n;
      for(int t=0;t<pow(2,n);t++){
           convertDecimalToBinary(t,n);
      }
}