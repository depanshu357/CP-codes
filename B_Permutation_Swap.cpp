#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=1,r= n;
    int ans;
    int test=n+1;
    int pos;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1) {test = min(test,abs(arr[i]-i-1));break;}
    }
    if(test==n+1){cout<<n<<endl;return;}
    // for(int i=test-1;i<n;i++)if(arr[i]==test)pos = i+1;
    // // cout<<pos-test<<endl;
    //  test = pos-test;
    vector<int> fac;
    for(int i=1;i<=test;i++){
        if(test%i==0)fac.push_back(i);
    }
    int start = fac.size()-1;
    test = fac[start];
    while(1){
        // cout<<test<<" ";
        int flag = 1;
        for(int i =0;i<n;i++){
            int mod= (i+1)%test;
            if(arr[i]%test!=mod){flag=0;break;}
        }
        if(flag){cout<<test<<endl;return;}
        else test=fac[--start];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}