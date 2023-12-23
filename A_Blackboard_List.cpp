#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    int flag = 0;
    int maxi = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]<0) flag = arr[i];
        maxi = max(maxi,arr[i]);
    }
    if(flag){
        cout<<flag <<'\n';
        return;
    }
    cout<<maxi<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}