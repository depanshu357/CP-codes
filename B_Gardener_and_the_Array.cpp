#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
     map<int,int> mp;
     int count = 0;
     vector<vector<int>> v;
     for(int i=0;i<n;i++){
        int k;cin>>k;
        vector<int> a;
        for(int i=0;i<k;i++){
            int temp;cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end(),greater<int>());
        v.push_back(a);
     }
     sort(v.begin(),v.end(),greater<vector<int>>());
    for(int i=0;i<n;i++){
        int k=v[i].size();
        int flag=0;
        for(int j=0;j<k;j++){
            int temp = v[i][j];
            // if(mp.find(temp)==mp.end()){
                mp[temp]++;
                // flag=1;
            // }
        }
        
    }
    for(int i=0;i<n;i++){
        int ok = 1;
        for(int j=0;j<v[i].size();j++){
        
            if(mp[v[i][j]]==1){
                ok =0;
                break;
            }
        

        }
        if(ok){
            cout<<"Yes\n";return;
        }
    }

    // if(count){cout<<"Yes\n";}
    cout<<"No\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}