#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int area=m*n;
        if(area%2==0){
            cout<<area/2<<endl;
        }else{
            cout<<area/2+1<<endl;
        }

    }
}