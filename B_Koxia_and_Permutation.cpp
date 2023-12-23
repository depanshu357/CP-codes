#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    // int key1 = n,key2=n-1;
    int arr[n];
    bool flag = false ;
    int key1= n;int key2=1;
    int counter = 1;
    for(int i=0;i<n;i++){
        if(counter == k){
            flag=!flag;
            counter=1;
        }
        if(flag){
            cout<<key2++<<" ";
        }else{
            cout<<key1--<<" ";
        }
        counter++;
    }
        cout<<endl;

}
int main(){
    int t;cin>>t;
    while(t--)solve();
}