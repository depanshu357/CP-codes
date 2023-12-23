#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
long long power(long long a,long long n,long long d){
    long long res = 1;
    while(n){
        if(n%2==0){
            res = ((res%d)*(res%d))%d;
            n/=2;
        }else{
            res= ((res%d)*(a%d))%d;
            n--;
        }
    }
    return res%d;
}
void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    if(a==b){
        cout<<(power(a,n,mod)+power(b,n,mod))%mod<<endl;
        return;
    }
    long long temp1= a-b;
    long long candidate=1;
    for(long long i=1;i*i<=temp1;i++){
        if(temp1%i==0){
            long long temp = (power(a,n,i)+power(b,n,i))%i;
            if(temp==0) candidate = max(candidate,i);
             temp = (power(a,n,temp1/i)+power(b,n,temp1/i))%(temp1/i);
            if(temp==0) candidate = max(candidate,temp1/i);
        }
    }
    cout<<candidate<<endl;

}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}