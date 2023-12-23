#include<bits/stdc++.h>
using namespace std;
int main(){
      int a,b,c;
      cin>>a>>b>>c;
      int avg=(a+b+c)/3;
      int mini=min(min(a,b),c);
      int maxa=max(max(a,b),c);
      int ans=a+ b +c;
      for(int i=mini;i<=maxa;i++){
        ans = min(ans,abs(a-i)+abs(b-i)+abs(c-i)); 
      }
      cout<<ans;
      return 0;
}