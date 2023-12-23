#include<iostream>
#include<map>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            int n,k;
            cin>>n>>k;
            int arr[n];
            multimap<int,int> mp;
            for(int i=0;i<n;i++){
                  cin>>arr[i];
                  mp.insert(pair<int,int>(arr[i],i));
            }
            for(int i=0;i<k;i++){
                  int a,b;
                  cin>>a>>b;  
                  // cout<<mp.lower_bound(a)->second<<" "<<(--mp.upper_bound(b))->second<<" ";
                  if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end() && mp.lower_bound(a)->second<(--mp.upper_bound(b))->second){
                        cout<<"YES"<<endl;
                  }
                  else{
                        cout<<"NO"<<endl;
                  }

            }

      }
      //       for(int i=0;i<k;i++){
      //             int a,b;
      //             cin>>a;cin>>b;
      //             int flag=0;
      //             int flag2=0;
      //             for(int i=0;i<n;i++){
      //                   if(a==arr[i] && flag2==0) flag++;
      //                   if(b==arr[i] && flag>0) flag2++;
      //             }
      //             if(flag>0 && flag2>0) cout<<"YES"<<endl;
      //             else cout<<"NO"<<endl;
      //       }
      // }
            
      return 0;
}