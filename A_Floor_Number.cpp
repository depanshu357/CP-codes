#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2){
            cout<<1<<endl;
        }else{
            int sum=1;
            if((n-2)%x==0){
                sum+=(n-2)/x;
                cout<<sum<<endl;
            }else{
                sum+=((n-2)/x+1);
                cout<<sum<<endl;
            }
        }
    }
}