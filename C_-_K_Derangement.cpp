#include<iostream>
using namespace std;
int main(){
      int n,k;
      cin>>n>>k;
      int arr[n];
      int ct=1;
      if(n-k<k){cout<<"-1"; return 0;}
      for(int i=0;i<n;i++){
            if(i+1+k>n){
               arr[i]=ct;
               ct++;
            }
            else{arr[i]=i+1+k;}
      }
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }
}