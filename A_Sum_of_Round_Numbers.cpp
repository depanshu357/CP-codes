#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            vector<int> v;
            int a=10;
            while(a!=1e6){
                  int b = n%a;
                  n=n-b;
                  a=a*10;
                  if(b>0){
                        // cout<<b<<" ";
                        v.push_back(b);
                  }

            } cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++){
                  cout<<v[v.size()-i-1]<<" ";
            }
            cout<<endl;
      }
      return 0;
}