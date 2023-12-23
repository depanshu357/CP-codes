#include <iostream>
using namespace std;
int main()
{
      int t;
      cin >> t;
      for (int k = 0; k < t; k++)
      {
            int n;
            cin >> n;
            int a[n];
            int b[n];
            int pos;
            for (int i = 0; i < n; i++)
                  cin >> a[i];
            for (int i = 0; i < n; i++)
                  cin >> b[i];
            int count, sigred = 0;
            int min = 4e6;
            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < n; j++)
                  {
                        if (b[i] > a[j])
                        {
                              count = i + j;
                              if(min>count) min=count;
                              if (i + j <= i + 1)
                                    sigred = 1; break;
                        }
                  }
                  if(sigred==1) break;
            }
            cout << min << endl;
      }
      return 0;
}