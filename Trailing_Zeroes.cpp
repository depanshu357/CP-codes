#include<iostream>
using namespace std;
 int main(){
    long long int n;
    cin>>n;
    long long int ans=0;
    while(n){
        ans= ans+(n/5);
        n=n/5;
    }
    cout<<ans;
    return 0;
}