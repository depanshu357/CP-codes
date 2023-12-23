#include <iostream>
using namespace std;
int main()
{
      int n;
      cin >> n;
      int sp = 2*n;
      int t = 0;
      int k = n + 1;
      while (k--)
      {
            for (int i = 0; i < sp; i++)
                  cout << " ";
            sp=sp-2;
            // for(int i=0;i<t;i++){cout<<t;}
            if (k == n)
            {
                  cout << "0";
                  t = t + 1;
                  cout << endl;
            }
            else
            {
                  for (int i = 0; i <= t; i = i + 1)
                  {
                        cout << i << " ";
                  }
                  for (int i = t - 1; i >= 0; i = i - 1)
                  {
                        cout << i;
                        if (i != 0)
                              cout << " ";
                  }
                  cout << endl;
                  t++;
            }
      }
      k = n;
      sp=sp+2;
            t--;
      while (k--)
      {
            sp++;
            sp++;
            t-- ;
            for (int i = 0; i < sp; i++) cout << " ";
            if (k == 0)
            {
                  cout << "0";
            }
            else
            {
                  for (int i = 0; i <= t; i++)
                  {
                        cout << i << " ";
                  }
                  for (int i = t - 1; i >= 0; i--)
                  {
                        cout << i;
                        if (i != 0)
                              cout << " ";
                  }
                  cout << endl;
            }
      }
}