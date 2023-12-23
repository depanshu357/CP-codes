#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int count=0,steps=0;
    for(int i=0;i<n;i++){
        int k = arr[i];
        while(k%2==0){
            k/=2;count++;
        }
    }
        int odd_mulitple  = 1;
    if(count<n){
         map<int,int> mp;
         int k =1;
        while(k<=n)k*=2;
        if(k%2==0)k/=2;
        int remaining=n-count;
        while(k!=1){
            int t  = odd_mulitple*k;
            steps++;
            while(t%2==0){
                remaining--;
                t/=2;
            }
            if(remaining<=0){
                break;
            }
            odd_mulitple+=2;
            if(odd_mulitple*k<=n)continue;
            else{odd_mulitple=1;k/=2;}

        }
        
        // for(int i=1;i<=n;i++){
        //     int t = i;
        //     if(t%2==0)steps++;
        //     while(t%2==0){
        //         remaining--;
        //         t/=2;
        //     }
        //     if(remaining<=0){
        //         break;
        //     }

        // }
        if(remaining>0){cout<<"-1"<<endl;}
        else
        cout<<steps<<endl;
    }else{
        cout<<"0"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}