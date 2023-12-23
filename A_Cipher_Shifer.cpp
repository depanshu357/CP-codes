#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string ans;
    int i =0;
    int flag = 0;
    char test;
    while(i<n){
        if(flag==0){
            test = s[i];
            i++;
            ans.push_back(test);
        }
        while(s[i]!=test && i<n) i++;
        i++;
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}