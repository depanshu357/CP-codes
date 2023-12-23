#include<iostream>
#include<map>
using namespace std;
int main(){
      int k;
      cin>>k;
      for(int t=0;t<k;t++){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++) cin>>arr[i];
            map <int ,int>rat;
            string s;
            cin>>s;
            int count1=0;
            int count0=0;
            for(int i=0;i<s.size();i++){
                  rat[arr[i]]=s[i]-'0';
                  if(rat[arr[i]]==1) count1++;
                  else count0++;
                  // cout<<rat[arr[i]]<<endl;
            }
            int help=0;
            auto it = rat.begin();
            for(;it!=rat.end();it++){
                  if(it->second==1){
                        it->second=++count0;
                  }else{
                        it->second=++help;
                  }
            }
            for(int i=0;i<s.size();i++){
                  cout<<rat[arr[i]]<<" ";
            }
            cout<<"\n";
      }
      return 0;
}