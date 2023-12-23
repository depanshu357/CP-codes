#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>n;
    cin>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min[n];
    for(int i=0;i<n;i++){
        int count1=0;
        int count2=0;
        int flag=1;
        for(int j=i;j>=0;j--){
            if(j==i || arr[j]>arr[i]) count1++;
            else{
                break;
            }
        }
        for(int j=i;j<n;j++){
            if(j==i || arr[j]>arr[i]) count2++;
        }
        min[i]=count1+count2-2;
    }
    while(t--){
         int i,j;
         cin>>i>>j;
         int minimum=min[i];
         int noreq= arr[i];
         for(int k=i;k<=j;k++){
            if(min[k]>minimum){
                minimum=min[k];
                noreq=arr[k];
            }
         }
        //  cout<<minimum<<endl;
         cout<<noreq<<endl;
    }
}