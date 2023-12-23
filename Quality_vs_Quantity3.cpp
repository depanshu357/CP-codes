#include <iostream>
#include <map>
using namespace std;
int main()
{
      int t;
      cin >> t;
      for (int k = 0; k < t; k++)
      {
            int n;
            cin>>n;
            long long  arr[n];
            multimap<long long, int> mp;
            for (int i = 0; i < n; i++)
            {
                  cin >> arr[i];
                  mp.insert(pair<long long,int>(arr[i],1));
            }
            long long sumb=0,sumr=0;
            int count=0;
            for(auto it=mp.begin();it!=mp.end();it++){
                  // cout<<it->first<<endl;
                  if(n%2==0){

                  if(count<n/2){
                        sumb+=(it->first);
                  }else if(count>n/2){
                        sumr+=(it->first);
                  }
                  }else{
                  if(count<=n/2){
                        sumb+=(it->first);
                  }else{
                        sumr+=(it->first);
                  }

                  }
                  count++;
            }
            // cout<<sumr<<" "<<sumb<<endl;
            if(sumr>sumb){
                  printf("YES\n");
            }else{
                  printf("NO\n");
            }
            
      }
      return 0;
}