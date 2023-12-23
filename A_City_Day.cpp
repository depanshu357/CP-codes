#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     int x,y;
     cin>>n>>x>>y;
     long long arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int ans =0;
     for(int i=0;i<n;i++){
        int flag=0;
        for(int j= 0;j<=x && (i-j)>=0;j++){
            if(arr[i]>arr[i-j]) {flag=1;break;}
        }
        if(flag==1) continue;
        for(int j=0;j<=y && (i+j)<n;j++){
            if(arr[j+i]<arr[i]){flag=1;break;}
        }
        if(flag==0) {ans= i+1;break;}
     }
     cout<<ans;
}