#include<bits/stdc++.h>
using namespace std;
vector<int> pairs[1001];
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
void solve(){
    
    int n;
    cin>>n;
    vector<int> di[1001];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        di[a].push_back(i+1);
    }
    int x,y;
    int maxsum=0;
    int ans=-1;
    for(int i=1;i<=1000;i++){
        for(int j:pairs[i]){
            if(!di[j].empty() && !di[i].empty()){
                ans=max(ans,di[i].back()+di[j].back());
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
              if(gcd(i,j)==1) pairs[i].push_back(j);
        }
    }
    while(t--){
        solve();
    }
}