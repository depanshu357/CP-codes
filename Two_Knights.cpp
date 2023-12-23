#include<iostream>
using namespace std;

 int main(){
    long long int n;
    cin>>n;
    for(long long int k=1;k<=n;k++){
        long long int tot_comb=(k*k)*(k*k-1)/2;
        long long int wrgpts=4*(k-1)*(k-2);
        long long int ans=tot_comb-wrgpts;
        cout<<ans<<endl;
    }
    return 0;
}