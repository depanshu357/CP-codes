#include<iostream>
using namespace std;
int main(){
    long long a,b,n;
    cin>>a>>b>>n;
    long long r=1,l=0,mid;
    while((r/a)*(r/b)<n){
        r*=2;
    }
    while(r>l+1){
        mid=(l+r)/2;
        if((mid/a)*(mid/b)<n)l=mid;
        if((mid/a)*(mid/b)>=n)r=mid;
        // if(mid==l || mid==r) break;
        // if(((mid/a)*(mid/b))>=n && ((mid-1/a)*(mid-1/b))<n) break;
    }
    cout<<r<<endl;
}