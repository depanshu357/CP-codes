#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a;
    vector<int> per;
    for (int i = 0; i < k; i++)
    {
        cin >> a;
        per.push_back(a);
    }
    
    if (k == 2 && per[0] < per[1])
    {
            cout << "-1";
            return 0;
    }
    else if (k > 2)
    {
        for (int i = 0; i < k - 1 && k > 1; i++)
        {
            if (per[i] < per[i + 1])
            {
                cout << "-1";
                return 0;
            }
        }
    }
    int king = n;
    // cout << king << endl;
    int init = per[0];
    while (init != 0)
    {
        cout << init << " ";
        init--;
    }
    for (int i = 0; i < (n - per[0]); i++)
    {
        cout << king << " ";
        king--;
    }
    return 0;
}