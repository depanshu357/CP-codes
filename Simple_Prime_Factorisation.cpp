#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int countfactors = 0;
        for (int i = 2; i * i <= n; i++)
        {
            int count = 0;
            if (n % i == 0)
                countfactors++;
            while ((n % i) != 0 )
            {
                n = (n / i);
        // cout<<n<<" ";
                count++;
                if(n==1 || n==0)break;
            }
            if (count > 0)
            {
                if (countfactors > 1)
                    cout << '*';
                cout << i << "^" << count;
            }
        }
        if (n > 1)
            cout << '*' << n ;
    cout<<endl;
    }
}