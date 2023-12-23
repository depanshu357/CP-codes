#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int k;cin>>k;
    string ans="",preAns="";
    // cout<<"k";
    for(int i=0;i<s.size();i++){
        if(i==0){
            ans.push_back(s[i]);
            // cout<<"k";
        }
        else if(i>0 && abs(s[i]-s[i-1]) <= k){
            ans.push_back(s[i]);
            // cout<<"a";
        }else{
            if(ans.length() > preAns.length()){
                preAns = ans;
            }
            ans = "";
            ans.push_back(s[i]);
            // cout<<preAns<<" e";
        }
    }
    if(ans.length() > preAns.length()){
                preAns = ans;
            }
    // if(preAns.length() > ans.length())cout<<preAns;
    // else 
    cout<<preAns<<'\n';
}