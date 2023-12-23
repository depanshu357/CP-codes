#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
             cin>>arr[i];

        }
        sort(arr,arr+n);
        int min = arr[0]^arr[1];
        for(int i=1;i<n;i++){
            int temp  = arr[i]^arr[i-1];
            if(temp<min) min=temp;
        }
        cout<<min<<endl;
    }
}