// #include <iostream>
#include<bits/stdc++.h>
// #include<bits
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
void solve(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l[n+2],r[n+2];
    l[0]=0;r[n+1]=0;
    for(int i=1;i<=n;i++){
        l[i]=gcd(l[i-1],arr[i-1]);
        // cout<<l[i]<< "f ";
    }
    for(int i=n;i>=1;i--){
        r[i]=gcd(r[i+1],arr[i-1]);
        // cout<<r[i]<<"d ";
    }

    for(int i=0;i<q;i++){
        int left,right;
        cin>>left >>right;
        cout<<gcd(l[left-1],r[right+1])<<endl;    
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
}