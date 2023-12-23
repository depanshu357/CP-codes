#include <iostream>
#include <string>
using namespace std;
int main()
{
      int n;
      cin >> n;
      cout << 2 * n << endl;
      string s;
      while (true)
      {
            if (n >=4 && n != 0)
            {
                  s.push_back('0' + 4);
            }
            else if (n == 0)
            {
                  break;
            }
            else
            {
                  s.push_back('0' + n % 4);
                  break;
            }
            n = n - 4;
      }
      // cout << n << endl;
      for(int i=s.size()-1;i>=0;i--){
            cout<<s[i];
      }
      // cout << s << endl;
      return 0;
}