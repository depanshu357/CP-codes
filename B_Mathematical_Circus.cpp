#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%2!=0){
             cout<<"YES"<<endl;
             for(int i=1;i<=n;i+=2){
                cout<<i<<" "<<i+1<<endl;
             }
        }else{
            if(k%4==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                for(int i=1;i<=n;i++){
                    cout<<i+1<<" "<<i<<endl;
                    i++;
                    if(i>=n) break;
                    cout<<++i<<" "<<++i<<endl;
                }
            }
        }
    }
}