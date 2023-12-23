#include<bits/stdc++.h>
using namespace std;
int upper_bound(vector<int> arr,int N,int K){
    int l =0,r = N;
    while(r>l){
        int mid = l + (r-l)/2;
        if(arr[mid]<=K){l = mid+1;}
        else{r = mid;}

    }
    return l;
}
int lower_bound(vector<int> arr,int N,int K){
    int l =0,r = N-1;
    while(r>l){
        int mid = l + (r-l)/2;
        if(arr[mid]>=K){
            r=mid;
        }else{
            l = mid+1;
        }
    }
    return l;
}
int main(){
    int n;cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){int a;cin>>a;arr.push_back(a);}
    int K;cin>>K;
    cout<< upper_bound(arr,n,K) <<" "<<lower_bound(arr,n,K) <<endl;
}

