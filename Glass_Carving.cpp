#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main()
{
      int w, h, n;
      cin >> w >> h >> n;
      vector<int> wid(w + 1, 0);
      vector<int> hei(h + 1, 0);
      wid[0] = 1;
      wid[w] = 1;
      hei[0] = 1;
      hei[h] = 1;

      int upx = w, upy = h, dy = 0, dx = 0;
      for (int i = 0; i < n; i++)
      {
            char s;
            cin >> s;
            int a;
            cin >> a;
            // cout<<s<<" "<<a<<" ";
            if (s == 'V')
            {
                  wid[a] = 1;
            }
            else
            {
                  hei[a] = 1;
            }
            int countx = 1, county = 1;
            int maxh = 0, maxy = 0;
            for (int j = 1; j < w + 1; j++)
            {
                  if (wid[j] == 0)
                  {
                        countx++;
                  }
                  else
                  {
                        if (maxh < countx)
                        {
                              maxh = countx;
                              // cout<<maxh<<"  ";
                              countx = 1;
                        }
                        countx=1;
                  }
            }
            // cout<<"|";
            for (int j = 1; j < h + 1; j++)
            {
                  if (hei[j] == 0)
                  {
                        county++;
                  }
                  else
                  {
                        if (maxy < county)
                        {
                              maxy = county;
                              // cout<<maxy<<" ";
                              county = 1;
                        }
                        county=1;
                  }
            }
            // cout<<maxy<<" "<<maxh<<" ";
            cout<<maxy*maxh<<endl;
      }
      // for(int i=0;i<w+1;i++){
      //       cout<<wid[i]<<" ";
      // }cout<<endl;
      // for(int i=0;i<h+1;i++){
      //       cout<<hei[i]<<" ";
      // }cout<<endl;
      return 0;
}