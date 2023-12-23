# include <iostream>
#include <bits/stdc++.h>
using namespace std;
int check(int sub[],int n){
   for(int i=0;i<n;i++){
       if(i==0){
           if(sub[0]>sub[1] || sub[0]>sub[n-1]) return 0;
       }else if(i==(n-1)){
           if(sub[n-1]<sub[n-2] || sub[0]>sub[n-1]) return 0;
       }else{
           int flag =0;
           if(sub[i]>sub[i-1] && sub[i]>sub[i+1]) flag =1; 
           else if(sub[i]<sub[i-1] && sub[i]<sub[i+1]) flag =1;
           if(flag!=1) return 0; 
       }
   }
   return 1;
}
int main(){
int t ;
scanf("%d",&t);
for(int j=0;j<t;j++){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // for(int i=0;i<n;i++) printf("%d ",arr[i]);
    // printf("\n");
    // for(int i=0;i<n-1;i++){
    //     for(int k=i+1;k<n;k++){
    //         if(arr[k]<arr[i]){
    //             int temp = arr[k];
    //             arr[k]=arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    // }
    sort(arr,arr+n);
    // for(int i=0;i<n;i++) printf("%d ",arr[i]);
    // printf("\n");
    int sub[n];
    if(n%2==0){
        for(int i=0;i<(n/2);i++){
            sub[2*i]=arr[i];
        }
        for(int i=0;i<(n/2);i++){
            sub[2*i+1]=arr[(n/2)+i];
        }
    }else{
        printf("NO\n");
        continue;

    }
    // for(int i=0;i<n;i++) printf("%d ",sub[i]);
    if(check(sub,n)){
        printf("YES\n");
    for(int i=0;i<n;i++) printf("%d ",sub[i]);
    }else{printf("NO");}
    printf("\n");
}
return 0;
}