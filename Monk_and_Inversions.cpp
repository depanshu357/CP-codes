#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int m=i;m<n;m++){
                    for(int k=j;k<n;k++){
                        if(arr[i][j]>arr[m][k] && m>=i && k>=j) count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}