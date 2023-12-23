#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<9;j++){
            if(((arr[i]>>j)%2) == 1 && ((arr[n-1]>>j)%2)==0){
                arr[n-1]=arr[n-1]+ (1<<j);
                arr[i]=arr[i]-(1<<j);
                
            }
        }
    }
    sort(arr,arr+n);
    for(int i=1;i<n-1;i++){
        for(int j=0;j<9;j++){
            if(((arr[0]>>j)%2) == 1 && ((arr[i]>>j)%2)==0){
                arr[0]=arr[0]-(1<<j);
            }
        }
    }

    int min= 2e5;
    for(int i=0;i<n;i++){
        if(min>arr[i])min = arr[i];
    }
    // cout<<arr[n-1]<<" "<< (1<<3) <<" ";
    cout<<arr[n-1]-min<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}