#include <iostream>
#include <vector>
using namespace std;
// long long solve(vector<long long> &even, long long count, long long n)
// {
//       long long steps = 0;
//       long long max = 0;
//       for (long long i = 0; i < even.size(); i++)
//       {
//             if (even[i] % 2 != 0)
//                   steps++;
//             if (max < even[i] && even[i] % 2 == 0)
//             {
//                   max = even[i];
//             }
//       }
//       if (max > 0)
//             count++;
//       for (long long i = 0; i < even.size(); i++)
//       {
//             if (max == even[i])
//             {
//                   even[i] = even[i] / 2;
//             }
//       }
//       if (steps == n)
//             return count;
//       else
//       {
//             return solve(even, count, n);
//       }
// }
int main()
{
      long long t;
      cin >> t;
      for (long long k = 0; k < t; k++)
      {
            long long n;
            int sigred=0;
            cin >> n;
            long long count = 0;
            vector<long long> even;
            long long iter = 0;
            long long testsub;
            for (long long i = 0; i < n; i++)
            {
                  cin >> testsub;
                  if (testsub % 2 == 0)
                        iter++;
                  even.push_back(testsub);
            }
            // cout<<solve(even, count, n)<<endl;
                  long long steps = 0;
            while(steps!=n)
            {
                  steps=0;
                  long long max = 0;

                  for (long long i = 0; i < even.size(); i++)
                  {
                        if (even[i] % 2 != 0)
                              steps++;
                        if (max < even[i] && even[i] % 2 == 0)
                        {
                              max = even[i];
                        }
                  }
                  if (max > 0)
                        count++;
                  if (steps == n)
                  {
                        cout << count << endl;sigred=1;
                        break;
                  }
                  for (long long i = 0; i < even.size(); i++)
                  {
                        if (max == even[i])
                        {
                              even[i] = even[i] / 2;
                        }
                  }
                  if (steps == n)
                  {
                        cout << count << endl;sigred=1;
                        break;
                  }
            }
      }
      return 0;
}