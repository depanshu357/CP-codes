#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        int a = stoi(s.substr(0,i));
        int b = stoi(s.substr(i));
        if(s.substr(i)[0]=='0')continue;
        if(a<b){
            cout<<a<<" "<<b<<'\n';return;
        }
    }
    cout<<"-1\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}