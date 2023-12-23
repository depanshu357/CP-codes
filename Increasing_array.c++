#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int sum =0;
    cin >> arr[0];
    for(long long int i=1;i<n;i++){
        cin >> arr[i];
        if(arr[i]<arr[i-1]) {sum+=(arr[i-1]-arr[i]);arr[i]=arr[i-1];}

    }
    cout << sum;
    return 0;
}