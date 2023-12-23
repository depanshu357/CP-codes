#include <iostream>
using namespace std;
 int main()
{  long long int t;
cin>>t;
   for(long long int j=0;j<t;j++){

    long long int y, x;
    cin >> y;
    cin >> x;
    long long int ans;
   if(y==x){
    ans = y*x-(y-1);
   }
   else if(y<x && x%2!=0){ans= x*x-(y-1);}
   else if(y>x && y%2!=0){ans =(y-1)*(y-1)+x;}
   else if(y<x && x%2==0){ans=(x-1)*(x-1)+y;}
   else if(y>x && y%2==0){ans= y*y-(x-1);}
   cout<<ans<<endl;
   }
    return 0;
}