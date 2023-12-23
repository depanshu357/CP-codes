#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<int> nums;
    ll temp = n;
    ll f = 1;
    while(temp){
        nums.push_back(temp%9);
        f*=10;
        temp/=9;
    }
    reverse(nums.begin(),nums.end());
    string ans;
    for(int i=0;i<nums.size();i++){
        // cout<<nums[i]<<" ";
        if(nums[i]>=4) ans.push_back(nums[i]+1+'0');
        else ans.push_back(nums[i]+'0');
        // cout<<ans.back()<<" ";
    }
    cout<<ans<<'\n';
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}