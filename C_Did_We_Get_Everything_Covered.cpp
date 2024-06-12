#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k,m;
    cin>>n>>k>>m;
    // cout<<m<<" ";
    string s;cin>>s;
    set<char> st;
    int count = 0;
    string temp;
    for(int i=0;i<m;i++){
        // if(st.find(s[i])==st.end() && st.size()==k)
        st.insert(s[i]);
        // cout<<st.size()<<" ";
        if(st.size()==k){
            count++;
            temp.push_back(s[i]);
            st.clear();
        }
    }
    // cout<<count<<" ";
    if(count>=n){cout<<"YES\n";}
    else {
        cout<<"NO\n";
        // for(int i=0;i<count;i++) cout<<"a";
        cout<<temp;
        char notfound;
        for(int i=0;i<k;i++) if(st.find((char)('a'+i))==st.end()) {notfound = 'a'+i;break;}
        cout<<notfound;
        for(int i=0;i<n-count-1;i++)cout<<"a";
        // for(int i=0;i<n;i++) cout<<notfound;
        cout<<'\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}