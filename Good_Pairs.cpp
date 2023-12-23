#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        // vector<int> vec(n);
        int min, max, posi, posj;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (i == 0)
            {
                min = a;
                max = a;
                posi = 0;
                posj = 0;
            }
            else
            {
                if (min > a)
                {
                    min = a;
                    posi = i;
                }
                if (max < a)
                {
                    max = a;
                    posj = i;
                }
            }
        }
        cout << posi+1 << " " <<posj+1 << "\n";
    }
    return 0;
}