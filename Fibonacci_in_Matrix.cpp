#include<iostream>
using namespace std;
int arr[1000][5];
int num_to_binary(int n){
    int t=0;
    int f=1;
    while(n!=0){
        t+=(n%2)*f;
        f=f*10;
        n=n/2;
    }
    return t;
}
void matrix_ans(int n,int sum){
    int t = n%10;
     int j=1;
     sum+=(t*j);
    if(t!=0){
    arr[sum][1]

    } 
     j=j*2;
    n=n/10;
}

int main(){
    int n;
    cin>>n;
    arr[1][1]=1;
    arr[1][2]=1;
    arr[1][3]=1;
    arr[1][4]=0;
    int t=n;
    int count=0;
    int two=1;
    while(true){
        n=n/2;
        count++;
        two=two*2;
        if(n==0) break;
    }
    for(int i=1,j=1;i<=count;i++,j=j*2){
        arr[j*2][1]=arr[j][1]*arr[j][1]+arr[j][2]*arr[j][3];
        arr[j*2][2]=arr[j][1]*arr[j][2];
        arr[j*2][3]=arr[j*2][2];
        arr[j*2][4]=arr[j*2][1]-arr[j*2][2];
    }
    cout<<arr[32][1]<<" "<<arr[32][2]<<" "<<arr[32][3]<<" "<<arr[32][4];
    // cout<<porec(n);
    matrix_ans(binary_to_num(n,0));
    
    return 0;
}