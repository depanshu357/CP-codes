#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;cin>>n;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++)cin>>arr[i];
    vector <long long> v;
    v.push_back(arr[0]);
    long long ans=v[0];
    for(long long i=1;i<n;i++){
        v.push_back(arr[i]);
        if(v[i-1]>0){v[i]+=v[i-1];}
        ans=max(ans,v[i]);
    }
    cout<<ans<<endl;
}