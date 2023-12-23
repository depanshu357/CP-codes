#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
ll pow_n(ll temp,ll n){
    if(n==0) return 1;
    if(n==1) return temp;
    if(temp<=1) return temp;
    if(n%2) return pow_n(temp,n/2)*pow_n(temp,n/2)*temp;
    else return pow_n(temp,n/2)*pow_n(temp,n/2);
}
void solve(){
    ll n;cin>>n;
    ll l = 2;
    ll r = n;
    if(n<=1) {cout<<"NO\n";return;}
    while(l*l<=n){
        ll temp ;
        ll low = 3,high = (log2(n)/log2(l)) + 3;
        // cout<<high<<" ";
        // cout<<l<<"l ";
        while(low<=high){
            ll mid =  (high+low)/2;
             temp = (pow(l,mid)-1)/(l-1);
            //  cout<<temp<<" "<<low<<" "<<high<<" ";
            if(temp == n){cout<<"YES\n";return;}
             if(temp < n) low = mid+1;
             else high = mid - 1;
            //  cout<<"low"<<low<<"high"<<high<<" ";
        }  
            if(temp == n){cout<<"YES\n";return;}
        l++;
    }
    cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}