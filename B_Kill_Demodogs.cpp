#include<bits/stdc++.h>
using namespace std;
 long long modulo = 1000000007;
void solve(){
    long long n;
    cin>>n;
    long long sum=0;
    // long long 
    // if(n%3==0){long long k = n/3;}
    // if((n-1)%3==0){l}
    
    long long k = 333333336;
    long long l = 166666668;
    sum = sum + (((((n-1))*((n))%modulo)*((n+1))%modulo))*(k%modulo);
    sum = sum%modulo;
    sum = sum+ (((((n*(n+1))%modulo)*((2*n+1)%modulo))%modulo)*(l%modulo))%modulo;
    sum = sum%modulo;
    sum = (2022*sum)%modulo;
    cout<<sum<<endl;
}
int  main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}