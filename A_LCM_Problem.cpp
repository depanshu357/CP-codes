#include <iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a*2>b){
            cout<<"-1 -1"<<endl;
        }else{
            cout<<a<<" "<<2*a<<endl;
        }
    }
}