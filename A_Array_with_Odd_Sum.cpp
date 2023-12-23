#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0;
        int even=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0) odd=1;
            else even=1;
        }
        if(odd==1 && even==1) cout<<"YES"<<endl;
        else if(n%2==0 && odd==1 && even ==0) cout<<"NO"<<endl;
        else if(n%2!=0 && odd==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}