#include <iostream>
#include <string>
using namespace std;
int main()
{
      int t;
      cin >> t;
      for (int k = 0; k < t; k++)
      {
            int n;
            cin >> n;
            int p[n];
            for (int i = 0; i < n; i++)
            {
                  cin >> p[i];
            }
            scanf("\n");
            string rat;
            cin >> rat;
            int q[n];
            
            for (int i = 0; i < n; i++)
            {
                  cout << q[i] << " ";
            }
            cout << "\n";
      }
      return 0;
}