#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// long long and_of_range(long long x,long long y){
//     long long ans=0;
//     for(long long i=63;i>=0;i--){
//         if((x&(1<<i))!=(y&(1<<i)))break;
//         else{
//             ans|=((1<<i)&x);
//         }
//     }
//     return ans;
// }
int msbPos(ll n)
{
    int msb_p = -1;
    while (n)
    {
        n = n>>1;
        msb_p++;
    }
    return msb_p;
}
 
// Function to find Bit-wise & of all numbers from x
// to y.
ll and_of_range(ll x, ll y)
{
    ll res = 0; // Initialize result
 
    while (x && y)
    {
        // Find positions of MSB in x and y
        int msb_p1 = msbPos(x);
        int msb_p2 = msbPos(y);
 
        // If positions are not same, return
        if (msb_p1 != msb_p2)
            break;
 
        // Add 2^msb_p1 to result
        ll msb_val =  (1ll << msb_p1);
        res = res + msb_val;
 
        // subtract 2^msb_p1 from x and y.
        x = x - msb_val;
        y = y - msb_val;
    }
 
    return res;
}
void solve(){
    long long n,x;cin>>n>>x;
    if((x&n)!=x){cout<<"-1\n";return;}
    if(x>n){cout<<"-1\n";return;}
    else if(x==n){cout<<n<<"\n";return;}
    else{
        long long ans=-1;
        long long l = n,r=5e18;
        while(l<=r){
            long long mid=l+(r-l+1)/2;
            long long val=and_of_range(n,mid);
            if(val>x){l=mid+1;}
            else{r=mid-1;if(val==x)ans=mid;}
        }
    cout<<ans<<endl;
    }
}
int main(){
    long long t;
    cin>>t;while(t--)solve();
}