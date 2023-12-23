#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    if(n==1){cout<<"0\n";return;}
    bool parity = (arr[0]%2);
    int ans=0;
    for(int i=0;i<n-1;i++){
        if((arr[i]%2)==(arr[i+1]%2)){ans++;}
        else{parity=!parity;}
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}