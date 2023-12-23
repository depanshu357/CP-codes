#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n],arr2[n];
        int count1=0,count2=0;
        for(int i=0;i<n;i++){cin>>arr1[i];if(arr1[i])count1++;}
        for(int i=0;i<n;i++){cin>>arr2[i];if(arr2[i])count2++;}
        int steps = abs(count2-count1);
        int steps2=0;
        for(int i=0;i<n;i++){
            steps2+=(arr1[i]^arr2[i]);
        }
        if(steps==0 && steps2==0) cout<<'0'<<endl;
        else if(steps==0) cout<<'1'<<endl;
        else{
             if(steps == steps2)cout<<steps<<endl;
             else{
                cout<<steps+1<<endl;
             }
        }
    }
}