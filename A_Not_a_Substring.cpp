#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin>>s;
    string ans;
    int n = s.size();
    for(int i=0;i<n;i++){
        ans.push_back('(');
    }
    for(int i=0;i<n;i++){
        ans.push_back(')');
    }
    int flag=0;
    for(int i=0;i<ans.size();i++){
        if(ans.substr(i,s.size())==s){flag=1;break;}
    }
    if(!flag){
        cout<<"YES\n";
        cout<<ans<<'\n';
        return;
    }
    flag=0;
    ans="";
    for(int i=0;i<n;i++){
        ans.push_back('(');
        ans.push_back(')');
    }
    for(int i=0;i<ans.size();i++){
        if(ans.substr(i,s.size())==s){flag=1;break;}
    }
    if(!flag){
        cout<<"YES\n";
        cout<<ans<<'\n';
        return;
    }
    flag=0;
    cout<<"NO\n";


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}