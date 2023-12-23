#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int start2;
    if(n%2==0){
     start2 = n/2;
    // start2++;
    }else{
      start2= (n+1)/2;
    //   start2++;
    }
    int start1=n;
    int temp = start1;
    start1= start2;
    start2 =temp;
    int count =0;
    while(count!=n){
        cout<<(start1)<<" ";
        count++;
        start1--;
        if(count!=n){

        cout<<start2<<" ";
        start2--;
        count++;
        }
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}