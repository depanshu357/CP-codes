#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n), brr(n);
    for(int &e: arr) cin>>e;
    for(int &e: brr) cin>>e;
    int flag = 0;
    for(int i=0;i<n;i++){
        int j = i;
        int f = 0;
        while(j<n && brr[j]>=brr[i] && arr[j]<brr[i]) j++;
        if(!(j==n || arr[j]!=brr[i])) f = 1;
        j = i;
        while(j>=0 && brr[j]>=brr[i] && arr[j]<brr[i]) j--;
        if(!(j==-1 || arr[j]!=brr[i])) f = 1;
        if(!f){flag = 1;break;}
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}