#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n+1);
    arr[0] = 1;
    for(int i=1;i<=n;i++) cin>>arr[i];
    int count =0;
    int maxi = 0;
    for(int i=n;i>=0;i--){
        if(arr[i]==1){
            int j = i+1;
            while(j<=n && arr[j]>1) j++;
            int count2 = j - i -1;
            maxi = max(maxi,count + count2);
        }
        count++;
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