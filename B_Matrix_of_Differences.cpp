#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)arr[i][j]=0;
    }
    int x=0,y=0;
    int left = 1;int right=n*n;
    bool flip =true;
    bool counter = true;
    for(int i=0;i<n*n;i++){
        if(flip){arr[y][x]=left++;}
        else {arr[y][x]=right--;}
        flip=!flip;
        if(counter){
            x++;
        }else{
            x--;
        }
        if(x==n){x=n-1;counter=!counter;y++;}
        else if(x==-1
        ){x=0;counter=!counter;y++;}

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}