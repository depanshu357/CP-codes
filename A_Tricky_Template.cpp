#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool check(string a,string b){
    bool flag = true;
    for(int i=0;i<a.size();i++){
        if((a[i]>='A'&& a[i]<='Z' && a[i]!=b[i]+'A'-'a')){}
        else if(a[i]==b[i]) {}
        else {flag = false; break;}
    }
    return flag;
}
void solve(){
    int n;cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    string temp;
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(a[i]!=c[i] && b[i]!=c[i]) {}
            else count++;   
        }else {
            if(a[i]==c[i]){count++;}
        }
    }
    if(count==n) cout<<"NO\n";
    else cout<<"YES\n";
    // cout<<temp<<" ";
    // if(check(temp,a) && check(temp,b) && !check(temp,c)){
    //     cout<<"YES\n";
    // }else cout<<"NO\n";
    // cout<<"YES\n";
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}