#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll maxMod = 0;
void findMax(vector<ll> arr,ll m,ll sum,ll index){
    if(index==arr.size()){
        if(sum%m > maxMod) maxMod = sum%m;
        return;
    }
    findMax(arr,m,(sum%m + arr[index]%m)%m,index+1);
    findMax(arr,m,sum%m,index+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;cin>>n>>m;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){cin>>arr[i];arr[i] = arr[i]%m;if(arr[i]<0)arr[i]+=m;}
    sort(arr.begin(),arr.end());
    vector<ll> preSum(n);
    preSum[0] = arr[0];
    for(ll i=1;i<n;i++) preSum[i] = preSum[i-1] + arr[i];
    for(ll i=0;i<n;i++){
        ll j= 1;
        while(arr[i] + (j-1)*m < preSum[n-1]){
            if(i==0){
                ll t=  lower_bound(arr.begin(),arr.end(),arr[i]+j*m) - arr.begin();
                ll test = preSum[t-1]%m;
                if(maxMod < test) maxMod = test;
            }else{
                ll t=  lower_bound(arr.begin(),arr.end(),preSum[i]+j*m) - arr.begin();
                ll test = (preSum[t-1] - preSum[i])%m;
                if(test > maxMod) maxMod = test;

            }
            j++;

        }
    }
    // findMax(arr,m,0,0);
    cout<<maxMod<<'\n';
}