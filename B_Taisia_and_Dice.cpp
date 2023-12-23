#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,s,r;
    cin>>n>>s>>r;
    vector<int> arr(n,0);
    arr[n-1]=(s-r);
    for(int i=0;i<n-1;i++){
        arr[i]=1;
    }
    int sum = r -(n-1);
    int i=0;
    while(sum>0){
        if(sum>(s-r-1)){
        arr[i]+=(s-r-1);
        sum-=(s-r-1); 
        }
        else{arr[i]+=sum;sum-=sum;}
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}