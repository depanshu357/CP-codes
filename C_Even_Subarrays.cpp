#include<bits/stdc++.h>
using namespace std;
bool arr[int(2e5+1)];
void sieve(){
    for(int i=0;i<2e5+1;i++)arr[i]=false;
    arr[1]=arr[0]=true;
    for(int i=1;i*i<=2e5+1;i++){
        arr[i*i]=true;
    }

}
void solve(){
    int n;
    cin>>n;
    
}
int main(){
    int t;
    cin>>t;
    sieve();
    while(t--)solve();
}