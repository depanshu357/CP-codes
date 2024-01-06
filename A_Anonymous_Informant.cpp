#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n),vis(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    int index = n-1;
    int steps = arr[index];
    for(int i=0;i<n && i<k;i++){
        if(arr[index]>n){cout<<"No\n";return;}
        index = (index-arr[index]+n)%n;
    }
    cout<<"Yes\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}