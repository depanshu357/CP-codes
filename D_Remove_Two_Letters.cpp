#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string temp;
    temp.push_back(s[0]);
    temp.push_back(s[1]);
    int lesso =0;
    for(int i=2;i<n;i++){
         if(s[i]==s[i-2] && s[i]!=s[i-1]) {cout<<"K";lesso++;}
        else    if(s[i]!=s[i-1]) temp.push_back(s[i]);
        else if(s[i]==s[i-1] && s[i]!=s[i-2])temp.push_back(s[i]);
    }
    // set<string> setA;
    // int ans=0;int k1,k2;
    // for(int i=1;i<n-1;i++){
    //         string temp  = s.substr(0,i-1) + s.substr(i+1,n-i-1);
    //          k1 = setA.size();
    //         setA.insert(temp);
            
    //          k2 = setA.size();
    //         if(k2>k1){ans++;setA.erase(setA.begin());}
    //         // cout<<setA.size()<<" ";
    // }
    // int i= n-1;
    //     string temp  = s.substr(0,i-1) ;
    //         setA.insert(temp);
    cout<<lesso<<" ";
    cout<<temp.size()-1-lesso<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}