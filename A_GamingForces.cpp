#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[n];
    int ans =0;
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)counter++;
    }
    if(counter%2){
        ans++;
    }
    ans += (counter/2);
    ans += (n - counter);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}