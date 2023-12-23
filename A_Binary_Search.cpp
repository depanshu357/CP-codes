#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    arr[0]=-1e9;
    arr[n]=1e9;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
    int l=0,r=n;
    int num;
    scanf("%d",&num);
    while(l+1<r){
        if(arr[(l+r)/2]>num){r=((l+r)/2);}
        else{
            l=((l+r)/2);
        }
    }
    if(arr[l]==num || arr[r]==num) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}