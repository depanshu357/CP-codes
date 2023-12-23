#include<iostream>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0) return a;
    if(b==1) return (long long)1;
    return gcd(b,a%b);
}
int main(){
    long long a,b;
    cin>>a>>b;
    if(a<b){
        long long temp =a ;
        a =b;
        b= temp;
    }
    cout<< gcd(a,b);
}