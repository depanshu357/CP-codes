#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int min =1e9,minpos = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<min){min=arr[i];minpos=i;}
    }
    if(minpos==0){cout<<"Bob"<<endl;}
    else{cout<<"Alice"<<endl;}

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}