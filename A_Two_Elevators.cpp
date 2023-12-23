#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int t1 = a - 1;
        int t2 = abs(b - c) + c - 1;
        if (t1 < t2)
            cout << "1" << endl;
        else if (t2 < t1)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
}