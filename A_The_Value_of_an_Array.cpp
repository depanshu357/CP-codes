#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll p = 1e9 + 7;
ll power(long long x, ll y)
{
    
    ll res = 1; // Initialize result
    // ll p = NUM1;
    x = x % p; // Update x if it is more than or
               // equal to p
 
    if (x == 0)
        return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * 1LL*x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res%p;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;cin>>n>>k;
    vector<ll> arr(n);
    map<ll,ll> mp;
    ll mod = 1e9 + 7;
    ll sum =0;
    ll ans =0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
        // mp[arr[i]]++;
    for(ll i=0;i<k;i++){
        // sum  = (sum + pow(mp[i]))%mod
        mp[arr[i]]++;
    }
    for(auto it= mp.begin();it!=mp.end();it++){
        sum = (ll(sum%mod + power(it->first,it->second)))%mod;
    }
        ans = max(ans,sum);
    // cout<<ans<<endl;
    for(ll i=k;i<n;i++){
        if(arr[i]==arr[i-k]) continue;
        if(mp.find(arr[i])!=mp.end()){
            mp[arr[i]]++;
            // cout<<sum<<"K ";
            sum = ll((sum%mod + power(arr[i],mp[arr[i]]) - power(arr[i],mp[arr[i]]-1)))%mod;
            // cout<<sum<<"a ";
        }else{
            mp[arr[i]]++;
            sum = (ll(sum%mod + arr[i]))%mod;
            // cout<<sum<<"b ";
        }
        if(mp[arr[i-k]]!=1){
            mp[arr[i-k]]--;
            sum = (ll(sum%mod - power(arr[i-k],mp[arr[i-k]]+1) + power(arr[i-k],mp[arr[i-k]])))%mod;
            // cout<<sum<<"c ";
        }else{
            sum = (ll(sum%mod - arr[i-k]))%mod;
            mp.erase(arr[i-k]);
            // cout<<sum<<"d ";
        }

        ans = max(sum,ans);
        // cout<<ans<<endl;
        
    }
    cout<<ans<<endl;
}