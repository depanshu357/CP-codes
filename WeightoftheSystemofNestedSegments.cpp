#include<iostream>
#include<map>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            int n,m;
            cin>>n>>m;
            multimap<int,int> mp;
            map<int,int>mp1;
            for(int i=0;i<m;i++){
                  int a,b;cin>>a>>b;
                  mp1.insert(pair<int,int>(a,0));
                  mp.insert(pair<int,int>(b,a));

            }
            int count =1;
            for(auto itr=mp1.begin();itr!=mp1.end();itr++,count++){
                 itr->second=count;
            }
            // for(auto it= mp.begin();it!=mp.end();it++) cout<<it->first<<" ";
            int sum=0;
            int i=0;
            for(auto it= mp.begin();i<2*n;i++,it++){
                  sum+=it->first;
            }
            cout<<sum<<endl;
            i=0;
            int j= 0;
            int xi[n],bi[n];
            auto it=mp.begin();
            for(;i<2*n;it++,i++){
                  xi[i]=mp1[it->second];
                  // cout<<it->second<<" "<<mp1[it->second]<<" ";
            }
            for(;j<n;j++,it++){
                  bi[j]=mp1[it->second];
                  cout<<it->second<<" "<<mp1[it->second]<<" ";
            }
            cout<<endl;
            for(int i=n-1;i>=0;i--){
                  cout<<xi[i]<<" "<<bi[i]<<endl;
            }
            cout<<endl;
            
            

      }
      return 0;
}