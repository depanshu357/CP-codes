#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
// don't know what's the mistake , wrong answer on 1st testcase 5th case
void solve(){
    int height,width;cin>>height>>width;
    int k;cin>>k;
    k = k - height + 1 - width + 1;
    if(k<0 || k%2){cout<<"NO\n";return;}
    vector<vector<int>> hori(height,vector<int>(width-1,0));
    vector<vector<int>> veri(height-1,vector<int>(width,0));
    for(int i=0;i<width-1;i++) if(i%2) hori[0][i] = 1; else hori[0][i] = 0;
    hori[1][0] = hori[0][0];
    veri[0][0] = veri[0][1] = hori[1][0]^1;
    if(hori[0][width-2]==1) for(int i=0;i<height-1;i++)  veri[i][width-1] = i%2;
    else for(int i=0;i<height-1;i++) veri[i][width-1] = (i%2)^1;
    veri[height-2][width-2] = veri[height-2][width-1];
    hori[height-1][width-2] = hori[height-2][width-2] = veri[height-2][width-1]^1;
    cout<<"YES\n";
    for(auto a : hori) {for(auto b : a) if(!b) cout<<"B "; else cout<<"R "; cout<<'\n';}
    for(auto a : veri) {for(auto b : a) if(!b) cout<<"B "; else cout<<"R "; cout<<'\n';}
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}