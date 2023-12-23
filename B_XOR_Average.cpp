#include<bits/stdc++.h>
using namespace std;
int power(int x,int y){
    if(y==0)return 1;
    if(y%2==0){
        return power(x,y/2)*power(x,y/2);
    }else return power(x,y/2)*power(x,y/2)*x;
}
void solve(){
    int n;
    cin>>n;
    if(n%2==1){for(int i=0;i<n;i++)cout<<"1"<<" ";}
    else{
        if(n>2){
            for(int i=0;i<n-2;i++)cout<<"2"<<" ";
            cout<<"1 3";
        }else{
            cout<<"2 6";
        }
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}