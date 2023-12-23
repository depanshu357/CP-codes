#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    cout<<a<<" "<<b<<endl;
    if(b>a){
        int temp = b;
        b = a;
        a = temp;
    }
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}