#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int a1 = 0,a2 =0;
    int counter1 = n/2;
    int counter2 = n/2 +1;
    int test = 1;
    for(int i=0;i<n;i++){
        if(test==arr[i]){test++;}
        else break;
    }
    if(test==n+1){cout<<"0"<<endl;return;}
    for(int i =0;i<=n/2;i++){
        if(arr[i]==counter1){a1++;counter1++;}
        else break;
    }
    for(int i=n-1;i>=n/2;i++){
        if(arr[i]==counter2){a2++;counter2--;}
        else break;
    }
    int temp = min(a1,a2);
    int ans = n/2 - temp;
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}