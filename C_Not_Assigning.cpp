#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int temp[3]={2,3};
    int arr[n];
    int denarr[n+1]={0};
    int flag=0;
    for(int i=0;i<n-1;i++){
        int k,l;
        cin>>k>>l;
        arr[k]=l; 
        denarr[k]++;
        denarr[l]++;
        if(denarr[k]==3)flag=1;
    }
    // for(int i=0;i<n;i++)cout<<denarr[i]<<" ";
    // cout<<endl;
    if(flag) cout<< "-1"<<endl;
    else {
       for(int i=0;i<n-1;i++)cout<<temp[i%2]<<" ";
       cout<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}