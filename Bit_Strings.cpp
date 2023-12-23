#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int ans=1;
    while(n--){
        ans= (ans*2)%((long long int)10e8+7);
    }
    cout<<ans;
    return 0;
}