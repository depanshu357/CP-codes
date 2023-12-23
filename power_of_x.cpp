#include <iostream>
using namespace std;
long long power1(long long x, long long n)
{
    if (n == 0)
        return (long long)1;
    if (n % 2 == 0)
        return (power1(x, n / 2) * power1(x, n / 2))%2021;
    else
        return (power1(x, n / 2) * power1(x, n / 2) * x)%2021;
}
long long power2(long long x,long long n){
    if(n==0) return 1;
    return (x*power2(x,n-1))%2021;
}
int main()
{
    long long x;
    long long n;
    cin >> x >> n;
    cout << power1(x, n)<<endl;
    // cout << power2(x, n);
    return 0;
}