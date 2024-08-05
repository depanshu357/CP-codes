#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<vector<char>> v(2,vector<char>(n));
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int count = 0;
    for(int i=0;i<2;i++){
        for(int j=1;j<n-1;j++){
            if(v[i][j]=='x') continue;
            if(v[(i+1)%2][j]=='.' && v[(i+1)%2][j+1]=='x' && v[(i+1)%2][j-1]=='x' && v[i][j+1]=='.' && v[i][j-1]=='.') count++;
        }
    }
    cout<<count<<endl;
    return;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}