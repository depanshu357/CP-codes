#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        cout<<n+1-arr[i]<<" ";
    }
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}