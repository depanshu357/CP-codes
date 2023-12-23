#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int low,int high){
    if(arr[low]==1) return low;
    if(low>=high) return high;
    int mid=(low+high)/2;
    if(arr[mid]==0){
         return BinarySearch(arr,n,mid+1,high);
    }else{
        if(mid>=0 && arr[mid-1]==0) return mid;
        else{
            return BinarySearch(arr,n,low,mid-1);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<BinarySearch(arr,n,0,n-1);
    return 0;
}