#include <iostream>
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
            int count = 0;
            int ipos = -1, fpos;
            auto itr = mp.cbegin();
            int a = itr->first;
            int flag = 0;
            auto ite = mp.crbegin();
            int b = ite->first;
            int max = -1;
            // if (mp[a] >= k)
            // {     
            //       count++;
            //       max=count;
            //       flag=1;
            //       ipos = a;
            //       fpos = a;
            // }
            int sub;
             cout<<" "<<a<<" "<<b<<" ";
            for (int i = a ; i < b; i++)
            {     
                  if(mp.find(i)!=mp.end() && mp[i]>=k){
                        if(flag==1){
                              count++;
                              if(max<count){
                              max=count;
                              ipos=sub;
                              fpos++;
                              }
                        }else{
                              count=1;
                              int sub=i; 
                              flag=1;
                              
                              
                        }
                  }else{
                        flag=0;
                        count=0;
                  }
            }
            if (ipos = -1)
                  cout << "-1\n";
            else
                  cout << ipos << " " << ipos + count << endl;
      }
return 0;
}