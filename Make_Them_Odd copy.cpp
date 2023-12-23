#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            int arr[n];
            set<int> s;
            int count = 0, steps = 0;
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
                  if (s.find(arr[i]) == s.end())
                  {
                        if (arr[i] % 2 == 0)
                              s.insert(arr[i]);
                        count++;
                  }
            }
            // for (auto it = s.begin(); it != s.end(); it++)
            //       cout << *it << " ";
            // cout<<*(s.rbegin());
            // cout << endl;
            while (!s.empty())
            {
                  if ((*s.crbegin()) % 2 == 0)
                  {
                       int a=*s.crbegin();
                        s.erase(*s.crbegin());
                        steps++;
                        if (a % 4 == 0)
                              s.insert(a/ 2);
                  }
                  else
                  {
                        s.erase(*s.crbegin());
                  }
            }
            cout<<steps<<endl;
      }
      return 0;
}