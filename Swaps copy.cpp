#include <iostream>
#include <map>
using namespace std;
int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            map<int, int> arr, brr;
            int a[n], b[n];
            for (int i = 0; i < n; i++)
            {
                  cin >> a[i];
                  arr[a[i]] = i;
            }
            for (int i = 0; i < n; i++)
            {
                  cin >> b[i];
                  brr[b[i]] = i;
            }
            int maxa=0,maxb=0;
            int sum;int as;int bs;
            if (a[0] < b[0])
                  cout << "0" << endl;
            else
            {
                  for (auto it1 = arr.begin(); it1 != arr.end(); it1++)
                  {
                        if ((it1->first - it1->second ) > maxa){
                              as = it1->second;   
                              maxa= (it1->first - it1->second );
                        }
                  }

                  for(auto it2 = brr.begin();it2!=brr.end();it2++){
                        if((it2->first-it2->second)>maxb){
                              maxb=(it2->first - it2->second);
                              bs=it2->second;
                        } 
                  }
                  sum=as+bs;
                  cout <<  sum << "\n";
            }
      }
      return 0;
}