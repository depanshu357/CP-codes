#include<bits/stdc++.h>
using namespace std;
double acc = 1e-7;
int areEnoughPieces(int n,int k,double t,double arr[]){
       int count=0;
       for(int i=0;i<n;i++){
        count+=(int)(arr[i]/t);
       }
       if(count>=k) return 1;
       else return 0;
}
int main(){
    int n,k;
    cin>>n>>k;
    double arr[n];
    int max=0;
    for(int i=0;i<n;i++){
          cin>>arr[i];
          if(max<arr[i])max=arr[i];
    }
    double l=0,r=max;
    double mid;
    double ans=0;
    while((r-l)>acc){
        mid= l + (r-l)/2.0;
        if(areEnoughPieces(n,k,mid,arr)){
             l=mid;
             ans=mid;
        }else{
            r=mid;
        }

    }
    if(areEnoughPieces(n,k,r,arr)){
        ans=r;
    }else{
        ans=l;
    }
    printf("%0.6lf",ans);
}