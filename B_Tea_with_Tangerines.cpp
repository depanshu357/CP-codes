#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int min=1e8 + 13;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(min>arr[i])min = arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
         if(arr[i]>=2*min){
            int temp = arr[i];
            // count +=  (temp/(2*min-1) + (((temp%(2*min-1))==0)?0:1));
            count += (temp/(2*min-1));
            count-=1;
            if((temp%(2*min-1))!=0) {count+=1;}
            // arr[i] = arr[i]/((arr[i]/(2*min))-1);
            // if(min > arr[i]) min = arr[i];
        }
    }
    cout<<count <<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}