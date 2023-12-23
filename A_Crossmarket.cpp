#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a=n,b=m;
        if(n<m){
            a=m;b=n;
        }
        if (n==1 && m==1 ) cout<<0<<endl;
        else
        cout<<2*b+a-2<<endl;
    }
}