#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a= max(max(x,y),z);
        int c= min(min(x,y),z);
        if((a==x && a==y) || (a==y && a==z) || (a==z && a==x)){
            cout<<"YES"<<endl;
            cout<<a<<" "<<c<<" "<<c<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}