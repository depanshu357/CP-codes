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
    int n ;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,pair<int,int>> mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]] = {i,i};
        }else if(mp[arr[i]].second < i){
                mp[arr[i]].second = i;
            }
        
    }
    int i =0;
    int currentPos = 0;
    int count =0 ;
    for(auto it = mp.begin();it!=mp.end();it++){
        cout<< it->second.first << " "<< it->second.second <<endl;
    }
    // while(i<n){
    //     if(mp[arr[i]].second >= currentPos){
    //         count++;
    //         i = mp[arr[i]].second+i;
    //         currentPos = mp[arr[i]].second;
    //     }else{
    //         i = mp[arr[i]].second + i;
    //     }
    // }
    cout<<count<<'\n';
}