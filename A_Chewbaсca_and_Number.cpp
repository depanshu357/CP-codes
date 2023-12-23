#include<bits/stdc++.h>
using namespace std;
int main(){
       string s;
      cin>>s;
      int arr[s.size()];
      for(int i=0;i<s.size();i++){
            arr[i]=s[i]-'0';
            if(arr[i]>4){
                  arr[i]=9-arr[i];
            }
      }
      int f=1;
      int sum=0;
      for(int i=s.size()-1;i>=0;i--){
           sum = sum + f*arr[i];
           f=f*10;
      }
      cout<<sum;
      return 0;
}
