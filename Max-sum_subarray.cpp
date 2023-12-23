#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int presum=-1e9+7;
    for(int i=0;i<n;i++){
          sum+=arr[i];
        //   cout<<sum<<endl;
          if(sum>presum)presum=sum;
          else{
            if(i+1<n && sum+arr[i+1]>presum){
                continue;
            }else 
            sum=0;
          }
    }
    cout<<presum;
}