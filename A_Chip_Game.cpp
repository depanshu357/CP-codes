#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        if(m%2==0 && n%2!=0){
            cout<<"Burenka"<<endl;
        }else if(n%2==0 && m%2!=0){
            cout<<"Burenka"<<endl;
        }else if(n%2!=0 && m%2!=0){
            cout<<"Tonya"<<endl;
        }else{
            cout<<"Tonya"<<endl;
        }
    }
}