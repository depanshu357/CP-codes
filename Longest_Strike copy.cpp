#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n, k;
            cin >> n >> k;
            int arr[n];
            vector<int> v;
            map<int, int> mp;
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
                  if (mp.find(arr[i]) == mp.end())
                        mp[arr[i]] = 1;
                  else
                  {
                        mp[arr[i]]++;
                  }
            }
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                  if (it->second >= k)
                        v.push_back(it->first);
            }
            int vn = v.size();
            int max = -1;
            int count = 1;
            int ppos, cpos;
            if (vn > 0)
            {
                  ppos = v[0];
                  for (int i = 1; i < vn; i++)
                  {
                        if (v[i] == (v[i - 1] + 1))
                              count++;
                        else
                        {
                              if (max < count)
                              {
                                    cpos = ppos;
                                    max = count;
                              }
                              ppos = v[i];
                              count = 1;
                        }
                  }
                  if (max < count)
                  {
                        cpos = ppos;
                        max = count;
                  }

                  cout << cpos << " " << cpos + max - 1 << endl;
            }
            else
            {
                  cout << "-1" << endl;
            }
      }
      return 0;
}