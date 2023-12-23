#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int flag=0;
    if(n==1){cout<<"0\n";return;}
    priority_queue<int,vector<int>,greater<int>> pq;
    // int count=0;
    // for(int i=1;i<n;i++){
    //     if(flag && arr[i] <=arr[i-1]){
    //         count++;
    //         // continue;
    //     }
    //     else if(arr[i] <= arr[i-1]) continue;
    //     else if(flag) break;
    //     else {flag = 1;count++;}
    //     // cout<<count<<" ";
    // }
    // cout<<count<<'\n';
    pq.push(arr[0]);
    for(int i=1;i<n;i++){
        
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}