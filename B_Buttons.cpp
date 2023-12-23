#include <iostream>
using namespace std;
int main()
{
      int n;
      cin >> n;
      int t = n;
      long long count = 0;
      while (t != 1)
      {
            if (t == n)
            {
                  count = count + t;
            }
            else
            {
                  count = count + 1 + t * (n - t);
            }
            t--;
      }
      count++;
      cout << count;
      return 0;
}