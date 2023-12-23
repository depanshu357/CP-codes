#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string l,r;
    cin>>l>>r;
    if(l.size() > r.size()){
        int k = l.size() - r.size();
        string temp;
        while(k--) temp.push_back('0');
        temp.append(r);
        r = temp;
    }else if(r.size() > l.size()){
        int k = r.size() - l.size();
        string temp;
        while(k--) temp.push_back('0');
        temp.append(l);
        l = temp;
    }
    int sum =0;
    int i = 0;
    while(l[i]==r[i] && i<l.size()) i++;
    // cout<<i<<" ";
    if(i>=0) sum += abs(l[i]-r[i]);
    i++;
    for(;i<l.size();i++){
        sum += 9;
    }
    cout<<sum<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}