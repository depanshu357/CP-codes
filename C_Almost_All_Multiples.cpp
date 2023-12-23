#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
    int t = *x;
    *x= *y;
    *y=t;
}
void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    swap(arr+1,arr+n);
    if(x!=n){
    swap(arr+1,arr+x);
        for(int i=x+1;i<n;i++){
            if(arr[x]%i==0 && arr[i]%x==0){swap(arr+i,arr+x);x=i;}
        }
    }
    for(int i=1;i<n;i++){if(arr[i]%i){cout<<"-1\n";return;}}
    for(int i=1;i<=n;i++){cout<<arr[i]<<" ";}
    cout<<endl;
    
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
}