#include<iostream>
#include<algorithm>
using namespace std;
void swap(long long *xp, long long *yp)
{
    long long temp = *xp;
    *xp = *yp;
    *yp = temp;
}
long long partition(long long arr[],long long low,long long high){
    long long i=low-1;
    long long pivot=arr[high];
    for(long long j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quicksort(long long arr[],long long low,long long high){
    if(low<high){
        long long pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main(){
    long long t;
    cin>>t;
    for(long long k=0;k<t;k++){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        quicksort(arr,0,n-1);
        // sort(arr,arr+n);
        long long countb=0,countr=0,sumr=0,sumb=0;
        long long posb=0;
        long long posr=n-1;
        sumb=arr[0]+arr[1];
        sumr=arr[n-1];
        posb=1;countb=2;
        countr=1;
        // for(long long i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        // cout<<sumb<<" "<<sumr<<"\n";
        if(sumr>sumb){
            cout<<"YES\n";
            continue;
        }
        while(!(sumr>sumb) ){
            if(countr>=n/2) break;
             sumb=sumb+arr[++posb];
             sumr+=arr[--posr];
             countb++;
             countr++;
        cout<<sumb<<" "<<sumr<<"\n";
        }
        if(sumr>sumb){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}