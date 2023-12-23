#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]] = i;
    }
    int prevPos = -1;
    int count = 1;
    for(int i=1;i<=n;i++){
        if(prevPos > mp[i]) count++;
        prevPos = mp[i];
    }
    cout<<count<<'\n';
}