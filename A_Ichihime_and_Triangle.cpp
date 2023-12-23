#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = a, y = b, z = c;
        int flag = 0;
        int mid1= (a+d)/2;
        // if(mid1<=c && mid1>=b){
        //     z=d;
        //      if(d/3<=b) {a=c/3;b=mid1;z=d;}
        //      while(z/3>x){
        //         z--;
        //      }
        // }
        cout << b << " " << c << " " << c << endl;
    }
}