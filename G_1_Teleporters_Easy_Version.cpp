#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,c;cin>>n>>c;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> tC(n);
    for(int i=0;i<n;i++){
        tC[i] = i+1 + v[i];
    }
    sort(tC.begin(),tC.end());
    int ans=0;
    int counter = 0;
    while(c>0){
        if(c-tC[counter] >=0){ans++;c -= tC[counter];counter++;if(counter==n)break;}
        else break;
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