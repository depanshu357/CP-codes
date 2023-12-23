#include<bits/stdc++.h>
using namespace std;
// long long global[200005];
void MergeSort(long long arr[],long long l,long long r){
    if(l>=r)return;
        long long mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        long long C[r-l+1];
        long long k=0,i=l,j=mid+1;
        while(i<=mid && j<=r){
            if(arr[i]>arr[j]){
                C[k++]=arr[j++];
            }else{
                C[k++]=arr[i++];
            }
        }
        while(i<=mid){
            C[k++]=arr[i++];
        }
        while(j<=r){
            C[k++]=arr[j++];
        }
        for(long long i=0;i<(r-l+1);i++){
            arr[i+l]=C[i];
        }
        return;
}
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    long long flag=0;
    map<int,int> mp;
    for(long long i=0;i<n;i++){cin>>arr[i];mp[arr[i]]++;}
    // MergeSort(arr,0,n-1);
    // sort(arr,arr+n);
    // long long test = arr[0];
    // long long count =1;
    // for(long long i=1;i<n;i++){
    //     if(test!=arr[i]){count++;test=arr[i];}
    // }
    // for(long long i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<mp.size()<<endl;
}