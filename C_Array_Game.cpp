#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ull n;cin>>n;
    ull k;cin>>k;
    vector<ull> v(n);
    for(ull i=0;i<n;i++) cin>>v[i];
    vector<ull> v2;
    sort(v.begin(),v.end());
    map<ull,ull> mp;
    ull mini = 1e18;
    if(k>=3){cout<<"0\n";return;}
    for(ull i=0;i<n;i++) {
        mp[v[i]]++;
        mini = min(mini,v[i]);
        if(mp[v[i]]==2){
            cout<<"0\n";return;
        }
    }
    for(ull i=0;i<n;i++){
        for(ull j=i+1;j<n;j++){
            // v2.push_back(v[j]-v[i]);
            // mini = min((ull)mini,(ull)(v[j]-v[i]));
            ull diff = v[j] - v[i];
            mini = min(mini,diff);
            if(k==2){
                ull index = lower_bound(v.begin(),v.end(),diff) - v.begin();
                if(index!=n) mini = min(mini,v[index] - diff);
                if(index) mini = min(mini,diff - v[index-1]);
            }
        }
    }
    if(k==1){cout<<mini<<'\n';return;}
    // sort(v2.begin(),v2.end());
    // for(ull i=0;i<n;i++){
    //     ull index = lower_bound(v2.begin(),v2.end(),v[i]) - v2.begin();
    //     if(index!=v2.size())mini = min(mini,(v2[index]-v[i]));
    //     if(index) mini = min(mini,(-v2[index-1]+v[i]));
    // }
    cout<<mini<<'\n';


}   
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull t;cin>>t;
    while(t--)solve();
}