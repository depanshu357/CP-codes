#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        if((abs(n-sx)+abs(m-sy))<=d){
            cout<<"-1"<<endl;
        }else if(abs(n-sx)<=d &&  abs(m-sy)<=d){
           cout<<"-1"<<endl;
        }else if(abs(sx-1)<=d &&  abs(sy-1)<=d){
           cout<<"-1"<<endl;
        }else if(abs(sx-1)<=d && abs(n-sx)<=d){
           cout<<"-1"<<endl;
        }else if(abs(sy-1)<=d && abs(m-sy)<=d){
           cout<<"-1"<<endl;
        }else{
            cout<<n+m-2<<endl;
        }
    }
}