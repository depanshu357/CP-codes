#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
map<char,ll> mp = {{'A',1},{'B',10},{'C',100},{'D',1000},{'E',10000}};
long long calculateSum(string s){
    ll sum =0;
    int n = s.size();
    int prev = n-1;
    for(ll i=n-1;i>=0;i--){
        if(i==n-1) sum = mp[s[i]];
        else if( mp[s[i]] >= mp[s[prev]] ){
            sum = sum + mp[s[i]];
            prev = i;
        }else if(mp[s[i]] < mp[s[prev]]){
            sum = sum - mp[s[i]];
            // disaster[prev] += mp[s[i]];
            // cout<<mp[s[i]];
        }
    }
    return sum;
}
void solve(){
    string s;cin>>s;
    ll n = s.size();
    // ll sum = 0;
    ll prev = n-1;
    ll least = 0;
    if(s.size()==1){cout<<"10000\n";return;}
    vector<ll> preSum(n,0);
    map<int,int> disaster;
    int lastE=-1,lastC=-1,lastD=-1,lastB=-1;
    if(s[0]!='E') preSum[0] = mp[s[0]];
    for(ll i=1;i<n;i++){
        if(s[i]=='E') lastE = i;
        if(s[i]=='D') lastD = i;
        if(s[i]=='C') lastC = i;
        if(s[i]=='B') lastB = i;
        if(s[i]!='E'){
            preSum[i] = mp[s[i]] + preSum[i-1];
        }
    }
    vector<ll> sum(n,0);
    for(ll i=n-1;i>=0;i--){
        if(i==n-1) sum[i] = mp[s[i]];
        else if( mp[s[i]] >= mp[s[prev]] ){
            sum[i] = sum[i+1] + mp[s[i]];
            prev = i;
        }else if(mp[s[i]] < mp[s[prev]]){
            sum[i] = sum[i+1] - mp[s[i]];
            disaster[prev] += mp[s[i]];
            // cout<<mp[s[i]];
        }
    }
    ll maxi =0;
    ll case1 = 10000 + sum[1];
    maxi = max(maxi,case1);
    for(ll i=1;i<n-1;i++){
        ll test = - preSum[i-1] + 10000 + sum[i+1];
        maxi = max(maxi,test);
    }
    maxi = max(-preSum[n-2]+10000,maxi);
    if(lastE!=-1){
        string temp = s;
        temp[lastE] = temp[lastE-1];
        maxi = max(maxi,calculateSum(temp));
    }
    if(lastD!=-1){
        string temp = s;
        temp[lastD] = temp[lastD-1];
        maxi = max(maxi,calculateSum(temp));
    }
    if(lastC!=-1){
        string temp =s;
        temp[lastC] = temp[lastC-1];
        maxi = max(maxi,calculateSum(temp));
    }
    cout<<maxi<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}