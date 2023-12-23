#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sm= min(x,y);
        if(sm*2>=max(x,y)){
            cout<<(sm*2)*(sm*2)<<endl;
        }else{
            cout<<(max(x,y)*max(x,y))<<endl;
        }
    }
}