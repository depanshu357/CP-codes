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
    int n;cin>>n;
    string s;cin>>s;
    vector<char> v[n];
    int m = s.size();
    m = m/n;
    // cout<<s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v[i].push_back(s[i*m + j]);
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<v[i][j];
    //     }
    //     // cout<<"\n";
    // }
    string ans; 
    for(int i=0;i<m;i++){
        int x = 0,y=i;
        while(x<n && y<m){
            if(v[x][y]=='_')
            ans.push_back(' ');
            else
            ans.push_back(v[x][y]);
            x++;y++;
        }
    }
    cout<<ans<<'\n';
}