#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k,d;
    cin>>n>>k>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> v(k);
    for(int i=0;i<k;i++) cin>>v[i];
    int peak=0,steps=0;
    int same = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==i+1)same++;
    }
    if(peak<same)peak=same;
    int initPeak= peak;
    // if(d==1){
    //     cout<<max(same,0)<<'\n';return;
    // }
    int ans = initPeak + (d-1)/2;
    // cout<<ans<<" ";
    for(int i=0;i<2*n && i<d-1;i++){
        same = 0;
        for(int j=0;j<n;j++){
            if(j<v[i%k])arr[j] += 1;
            if(arr[j]==j+1) same++;
        }
        steps = i+1;
        ans = max(ans,same + (d-steps-1)/2);
        // cout<<ans<<" ";
    }
    // cout<<peak<<" "<<steps<<" ";
    cout<< ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}