#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string original = s;
    string largSub="";
    vector<int> indexes;
    for(int i=0;i<n;i++){
        while(largSub.size()!=0 && largSub.back() < s[i]) {largSub.pop_back();indexes.pop_back();}
        if(largSub.size() == 0) {largSub.push_back(s[i]);indexes.push_back(i);}
        else if(largSub.back() >= s[i]){largSub.push_back(s[i]);indexes.push_back(i);}
    }
    // cout<<largSub<<" ";
    int prevCount = 0;
    char temp = largSub[0];
    for(int i=0;i<largSub.size();i++){
        if(temp==largSub[i]) prevCount++;
    }
    reverse(largSub.begin(),largSub.end());
    for(int i=0;i<indexes.size();i++){
        s[indexes[i]] = largSub[i];
    }
    for(int i=1;i<n;i++){
        if(s[i]<s[i-1]){cout<<"-1\n";return;}
    }
    if(original == s) cout<<"0\n";
    else cout<<indexes.size() - prevCount<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}