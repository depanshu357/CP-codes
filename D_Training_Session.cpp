#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    map<int,int> a,b;
    vector<pair<int,int>> v(n); 
    for(int i=0;i<n;i++){
        int ai,bi;
        cin>>ai>>bi;
        v[i] = {ai,bi};
        a[ai]++;b[bi]++;
    }
    int na = a.size();
    int nb = b.size();
    // cout<<na<<" "<<nb<<" ";
    int ans = 0;
    if(na>=3){
        int temp = (na*(na-1)*(na-2))/6;
        for(auto it: a) temp = temp*it.second;
        ans += temp;
        cout<<temp<<" ";
    }
    if(nb>=3){
        int temp = (nb*(nb-1)*(nb-2))/6;
        for(auto it: b) temp = temp*it.second;
        cout<<temp<<" ";
        ans += temp;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[v[i].first]==1 && b[v[i].second]==1) count++;
    }
    cout<<count<<" ";
    if(count>=3) ans -= (count*(count-1)*(count-2))/6;
    cout<<ans<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}