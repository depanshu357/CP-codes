#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(k+1,{0,0});
    vector<int> prevIndex(k+1,-1);
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(prevIndex[arr[i]] == -1){
            v[arr[i]].first = i - prevIndex[arr[i]] - 1;
        }else{
            int stps = i - prevIndex[arr[i]] - 1;
            if(stps >= v[arr[i]].first){
                v[arr[i]].second = v[arr[i]].first;
                v[arr[i]].first = stps;
            }else if(stps >= v[arr[i]].second){
                v[arr[i]].second = stps;
            }
        }
        prevIndex[arr[i]] = i;
    }
    for(int i=1;i<=k;i++){
        if(prevIndex[i] == -1){
            v[i].first = n - prevIndex[i] - 1;
        }else{
            int stps = n - prevIndex[i] - 1;
            if(stps >= v[i].first){
                v[i].second = v[i].first;
                v[i].first = stps;
            }else if(stps >= v[i].second){
                v[i].second = stps;
            }
        }
    }
    int ans = INT_MAX;
    for(int i=1;i<=k;i++){
        // if(v[i].first == n)continue;
        // cout<<i<<"->("<<v[i].first<<","<<v[i].second<<") ";
        ans = min(ans,max(v[i].second,(v[i].first)/2));
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