#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;cin>>n;
    vector<long long> arr(n);
    // map<int,int> mp;
    for(long long i=0;i<n;i++){cin>>arr[i];}
    long long ans=0;
    // long long perSecond=1;
    // long long temp=arr[0];
    // long long per10 =0;
    // for(long long i=1;i<n;i++){mp[arr[i]]+=mp[arr[i-1]];}
    for(int i=0;i<n;i++){
        if(i>2 && arr[i]==arr[i-3]){ans++;}
        if(i>19 && arr[i]-arr[i-20]<10){ans++;}
        if(i>59 && arr[i]-arr[i-60]<60){ans++;}
    }

    cout<<ans;
    return 0;
}