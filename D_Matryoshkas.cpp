#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<bool> isDone(n,false);
    vector<int> v(n,0);
    map<int,int> mp;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int counter =0;
    int i=1;
    while(counter<=n){
        if(v[i]=v[i-1]+1){
            isDone[i]=isDone[i-1]=true;
        }
        else{}
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}