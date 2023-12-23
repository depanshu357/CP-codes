#include <iostream>
#include <map>
using namespace std;
int main()
{
      int n;
      cin >> n;
      map<string, int> mp;
      while (n--)
      {
            string s;
            cin >> s;
            // cout<<s.size()<<" ";
            if (mp.find(s) == mp.end())
            {
                  mp[s] = 0;
                  cout << "OK" << endl;
                  mp[s]=1;
            }
            else
            {     
                  cout<<s<<mp[s]<<"\n";
                  mp[s]++;
                  // char c = 'a';
                  // if (mp[s]==1)
                  // {
                  //       c = '1';
                  //       mp[s]++;
                  //       s = s + c;
                  //       mp[s]=1;
                  //       // cout << s << " ";
                  // }
                  // else if(mp[s]>1)
                  // {
                  //       // cout << "activated" << " ";
                  //       // int a = s[s.size() - 1] - '0';
                  //       c = mp[s] + '0';
                  //       mp[s]++;
                  //       s = s+ c;
                  //       mp[s]=1;
                        
                  //       // cout << s << " ";
                  // }
                  // mp[s] = 1;
                  // cout << s << "\n";
            }
      }
      return 0;
}