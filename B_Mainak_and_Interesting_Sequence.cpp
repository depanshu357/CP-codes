#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if(n>m){cout<<"No"<<endl;return;}
    if(m%2==0){
        if(n%2==0){
            cout<<"Yes"<<endl;
            int base = m/n;
            int rem = m%n;
            for(int i=0;i<n;i++){
                int add =0;
                if(rem>0){
                   rem--;
                   add=1;
                }
                cout<<base+add<<" ";
            }
            cout<<endl;
        }else{
            cout<<"Yes"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1"<<" ";
            }
            cout<<(m-(n-1))<<endl;
        }
    }else{
        if(n%2==0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
            for(int i=0;i<n-1;i++){
                cout<<"1"<<" ";
            }
            cout<<(m-(n-1))<<endl;
        }
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}