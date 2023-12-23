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
    int n;int m;
    cin>>n>>m;
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
    mp[0] = 0;
    set<pair<int,int>> st;
    for(int i=0;i<m;i++){
        int l,r;cin>>l>>r;
        int num1 = arr[l-1];
        int num2 = arr[r-1];
        if(num1 + 1 <=n) st.insert({num1,num1+1});
        if(num2 + 1<=n) st.insert({num2,num2+1});
        if(num1-1>0) st.insert({num1-1,num1});
        if(num2-1>0) st.insert({num2-1,num2});
        for(auto it: st){
            count -= mp[it.first] > mp[it.second];
        }
        swap(arr[l-1],arr[r-1]);
        mp[arr[l-1]] = l-1;
        mp[arr[r-1]] = r-1;
        for(auto it: st){
            count += mp[it.first] > mp[it.second];
        }
        cout<<count<<'\n';
        st.clear();
    }


}