#include <bits/stdc++.h>
using namespace std;
void Process(int arr[],int n){
    if(n==1){arr[0]=0;return;}
    if(n==2){arr[0]=1;arr[1]=0;return;}
    if(n==3){arr[0]=1;arr[1]=0;arr[2]=2;return;}
    if(n==4){arr[0]=0;arr[1]=3;arr[2]=2;arr[3]=1;return;}
    if(n==5){arr[0]=4;arr[1]=3;arr[2]=2;arr[3]=1;arr[4]=0;return;}
    int temp = 1;
    while(temp*temp<=2*(n-1)){temp++;}
    temp--;
    int square = temp*temp;
    int start = square-n+1;
    for(int i=start;i<n;i++){
        arr[i]=square-i;
        // cout<<arr[i];
    }
    Process(arr,start);

}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    Process(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}