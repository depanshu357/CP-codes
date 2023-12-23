#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;cin>>s;
    int loaves =0,onions =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L')loaves++;
        else onions++;
    }
    int rLoaves = loaves,rOnions = onions,lLoaves = 0,lOnions = 0;
    if(!loaves || !onions) {cout<<"-1\n"; return 0;}
    else {
        for(int i=0;i<n-1;i++){
            if(s[i]=='L'){rLoaves--;lLoaves++;}
            else {rOnions--;lOnions++;}
            if(rLoaves!=lLoaves && rOnions!=lOnions){
                cout<<i+1<<'\n';return 0;
            }
        }
        cout<<"-1\n";return 0;
    }
}