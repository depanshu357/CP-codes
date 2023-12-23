#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin>>s;
    vector<int> lowercase,uppercase;
    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(c=='b'){
            if(lowercase.size()==0)continue;
            s[lowercase.back()]='0';
            lowercase.pop_back();
            continue;
        }
        if(c=='B'){
            if(uppercase.size()==0)continue;
            s[uppercase.back()]='0';
            uppercase.pop_back();
            continue;
        }
        if(c>='a' && c <='z') lowercase.push_back(i);
        else uppercase.push_back(i); 
    }
    for(auto c: s){
        if(c!='0' && c!='b' && c!='B')cout<<c;
    }
    cout<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}