#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    int flag =0;
    long long sum =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // sum+=(arr[i]+i+1);
    }
        int index=0;
    for(int i=0;i<n;i++){
        if(t==(arr[index]+index+1)) flag=1;
        else if((arr[index]+index+1)>t) break;
        index=arr[index]+index;
    }
    if(flag==1) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}