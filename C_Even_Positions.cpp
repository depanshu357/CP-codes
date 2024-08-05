#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    stack<pair<char,int>> st;
    int ans = 0;
    for(int i=0;i<n;i++){
        char c;cin>>c;
        if(st.empty()){
            st.push({c,i});
        }else if(c==')' || c=='_'){
            ans += (i-st.top().second);
            st.pop();
        }else st.push({c,i});
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}