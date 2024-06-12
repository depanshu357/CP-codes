#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int x,n;cin>>x>>n;
    vector<int> factors;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            factors.push_back(i);
            factors.push_back(x/i);
        }
    }
    sort(factors.begin(),factors.end());
    int k = x/n;
    int index = lower_bound(factors.begin(),factors.end(),k) - factors.begin();
    if(factors[index]==k) cout<<k;
    else cout<<factors[index-1];
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}