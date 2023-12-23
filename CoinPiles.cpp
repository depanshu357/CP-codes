#include <iostream>
using namespace std;
int  main()
{
    long long t;
    cin >> t;
    for (long long k = 0; k < t; k++)
    {
        long long a, b;
        cin >> a >> b;
        if ((a + b) % 3 != 0)
        {
            cout << "NO\n";
        }
        else if (a == b && (a % 3) != 0)
        {
            cout << "NO\n";
        }
        else if(a/2>b || b/2>a){
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}