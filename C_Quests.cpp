#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    vector<int> arr(n),brr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>brr[i];
    int sum = 0;
    int preMax = 0;
    int ans = 0;
    for(int i=0;i<n && i<k;i++){
        sum += arr[i];
        preMax = max(preMax,brr[i]);
        ans = max(ans,sum + preMax*(k-i-1));
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}