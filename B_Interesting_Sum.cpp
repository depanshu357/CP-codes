#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int max1=0,max2=0,min1=1e9+7,min2=1e9+7;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(max1<arr[i]) {
                int temp = max1;
                max1=arr[i];
            max2=temp;}
            else if(max2<arr[i]) max2=arr[i];
            if(min1>arr[i]) {min2=min1;min1=arr[i];}
            else if(min2>arr[i]) min2=arr[i];
        }
        // cout<<max2<<" ";
        cout<<max1+max2-min1-min2<<endl;
    }
}