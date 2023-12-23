#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v(26,0);
    int maxFreq =0 ;
    for(auto c: s){
        v[c-'a']++;
        if(maxFreq < v[c-'a'])maxFreq = v[c-'a'];
    } 
    int remaining  = s.size() - maxFreq;
    if(maxFreq <= remaining && s.size()%2){cout<<"1\n";return;}
    if(maxFreq <= remaining && s.size()%2==0){cout<<"0\n";return;}
    cout<<maxFreq-remaining<<'\n';return;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}