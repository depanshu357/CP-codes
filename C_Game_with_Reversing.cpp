#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string a,b;
    cin>>a>>b;
    int cntsimi = 0;
    int ans = 1;
    int consi = 0;
    for(int i=0;i<a.size();i++){
        cntsimi += (a[i]==b[i]);
    }
    int cntsimiop = 0;
    string temp = b;
    reverse(temp.begin(),temp.end());
    for(int i=0;i<a.size();i++){
        cntsimiop += (a[i]==temp[i]);
    }
    if(cntsimiop > cntsimi){
        b =temp;
        consi = cntsimiop;
        ans = 0;
    } else consi = cntsimi;
    int diff = a.size() - consi;
    ans  += 2*diff - 2;
    cout<<ans<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}