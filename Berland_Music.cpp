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
            int num1 = n;
            int testpoint = n;
            for (int j = 0; j < n; j++)
            {
                  for (int i = 0; i < n; i++)
                  {
                        if (rat[i] == '1' && p[i] == testpoint)
                        {
                              q[i] = num1--;break;
                        }
                  }
                  testpoint--;
            }
            int num2 = 1;
            testpoint=1;
            for (int j = 0; j < n; j++)
            {
                  for (int i = 0; i < n; i++)
                  {
                        if (rat[i] == '0' && p[i] == testpoint)
                        {
                              q[i] = num2++;break;
                        }
                  }
                  testpoint++;
            }
            for (int i = 0; i < n; i++)
            {
                  cout << q[i] << " ";
            }
            cout << "\n";
      }
      return 0;
}