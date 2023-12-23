#include<bits/stdc++.h>
using namespace std;
int  main(){
    long long n;
    cin>>n;
    char arr[n];
    long long k=0;long long two=2;
    long long two2=2;
    long long k2=0;
    long long right=0;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        if(int(arr[i]-'0')){
            // cout<<"k ";
           if(k==0){k+=1;}
           else{k+=two;two*=2;} 
        }else{
            if(k2==0){k2+=1;}
            else{k2+=two2;two2*=2;}
        }
        // cout<<arr[i];
    }
    long long num = 1;
    for(long long i=0;i<n;i++){num*=2;}
    for(long long i=k+1;i<=(num-k2);i++){
        cout<<i<<" ";
    }
    cout<<endl;
}