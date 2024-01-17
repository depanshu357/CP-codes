#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    if(n%2){cout<<"-1\n";return;}
    int i=0,j=n-1;
    vector<int> ans;
    while(i<=j){
        // cout<<s[i]<<" "<<s[j]<<" ";
        if(s[i]!=s[j]){i++;j--;}
        else{
            if(s[i]=='0'){
                // s.append("01");
                s = s.substr(0,j+1) + "01" + s.substr(j+1);
                ans.push_back(j+1);
                i++;j=j+1;
            }else{
                // s = "01" + s;
                s = s.substr(0,i) + "01" + s.substr(i);
                ans.push_back(i);
                i++;j++;
            }
        }
        // cout<<s<<" ";
        if(ans.size()>300) break;
    }
    // cout<<':';  
    if(ans.size()>300){cout<<"-1\n";return;}
    cout<<ans.size()<<'\n';
    for(auto i : ans) cout<<i<<" ";
    cout<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}