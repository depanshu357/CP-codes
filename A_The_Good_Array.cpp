#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> arr(n,0);
    int ones =0;
    int flag = 0;
    int help = 0;
    for(int i=0;i<n/2;i++){
        int x = (i+1)/k;
        if(((i+1)%k) != 0) x = x+1;
        // cout<<x<<" ";
        if(ones < x){
            arr[i] = 1;
            arr[n-i -1] = 1;
            ones++;
        }
    }
    help = 0;
    for(int i=0;i<n/2;i++){
        // cout<<arr[i]<<" ";
        if(arr[i])help++;
    }
    // cout<<'\n';
    for(int i=n/2 ;i<n;i++){
        int x = (i+1)/k;
        if(((i+1)%k) != 0) x = x+1;
        if(arr[i]==1) help++;
        if(help < x){
            arr[i] = 1;
        help++;}
        // cout<<arr[i]<<" ";
    }
    int count = 0;
    cout<< help<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}