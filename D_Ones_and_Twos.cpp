#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,q;cin>>n>>q;
    vector<int> v(n); 
    set<int> st;
    for(int i=0;i<n;i++) {cin>>v[i];if(v[i]==1) st.insert(i);}
    while(q--){
        int cmd;cin>>cmd;
        if(cmd==1){
            int s;cin>>s;
            int num = st.size();
            if((s-num) & 1){
                if(num==0)cout<<"NO";
                else{
                    int s1 = (2 * (*st.rbegin()) ) - (num - 1);
                    int s2 = (2 *(n -  *st.begin() - 1)) - (num - 1); 
                    if(s <= max(s1,s2)) cout<<"YES";
                    else cout<<"NO";
                }
            }else{
                if(s <= 2*n - num ) cout<<"YES";
                else cout<<"NO";
            }
            cout<<'\n';
        }else{
            int i;cin>>i;i--;
            st.erase(i);
            cin>>v[i];
            if(v[i]==1) st.insert(i);
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}