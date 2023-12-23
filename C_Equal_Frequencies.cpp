#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    map<char,int> mp;
    for(int i=0;i<26;i++){
        char temp  = i+'a';
        mp[temp]=0;
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        char temp;
        cin>>temp;
        v.push_back(temp-'a');
        mp[temp]++;
    }
    int avgFreq= 0;
    for(int i=0;i<26;i++){
        avgFreq+=(mp[char(i+'a')]);
    }
    avgFreq =  round((double)avgFreq/(double)n);
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=mp[char(i+'a')];
    }
    sort(count,count+26,greater<int>());
    for(auto i: mp){
        for(int j=0;j<n;j++){
            if(v[j]==i){

            }
        }
    }

}
int main(){
    int t;cin>>t;
    while(t--)solve();
}