#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++){
       string name;
       cin>>name;
       s.push_back(name);
    //    cout<<s[s.size()-1]<<" ";
       int flag=0;
       for(int k=0;k<s.size()-1;k++){
            int x=(s[k].compare(name));
            if(!x) {cout<<"YES\n";flag=1;break;}
       }
       if(flag==0)cout<<"NO\n";
    }
    return 0;
}