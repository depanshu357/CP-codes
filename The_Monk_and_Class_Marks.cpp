#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cin>>n;
      map<int,multiset<string>> result;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        result[marks].insert(name);
    }
    for(auto it=result.rbegin();it!=result.rend();it++){
            auto &marks = it->first;
            auto &names = it->second;
            for(auto student: names){
                cout<<student<<" "<<marks<<endl;
            }
    }
}