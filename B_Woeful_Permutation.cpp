#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    if(n%2==0){
        int k =2;
        for(int i=0;i<n/2;i++){
           cout<<k<<" "<<k-1<<" ";
           k=k+2;
        }cout<<endl;
    }else{
        int t= 1;
        cout<<1<<" ";
        if(n==1){
            cout<<endl;
            continue;
        }
        t+=2;
        for(int i=t;t<=n;t+=2){
            cout<<t<<" "<<t-1<<" ";
        }cout<<endl;
    }
   }

}