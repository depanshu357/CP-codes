#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool comparator(pair<int,int> x,pair<int,int> y){
    if(x.first + x.second > y.first + y.second) return true;
    else return false;
    return false;
}
void solve(){
    int n;cin>>n;
    if(n%2==0){cout<<"No\n";return;}
    int x = 1,y =2*n;
    vector<pair<int,int>> v;
    while(y>n){
        v.push_back({x,y});
        x++;y-=2;
    }
    y = 2*n - 1;
    while(y>n){
        v.push_back({x,y});
        x++;y-=2;
    }
    sort(v.begin(),v.end(),comparator);
    auto it = v.begin();
    cout<<"Yes\n";
    for(;it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}