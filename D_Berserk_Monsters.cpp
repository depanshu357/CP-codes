#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> atk(n+2,0), def(n+2,0);
    vector<int> nxt(n+2,0), prev(n+2,0);
    for(int i=0;i<=n;i++) nxt[i] = i+1;
    for(int i=n+1;i>=0;i--) prev[i] = i-1;
    for(int i=1;i<=n;i++) cin>>atk[i];
    for(int i=1;i<=n;i++) cin>>def[i];
    set<int> indexes;
    for(int i=1;i<=n;i++){
        if(def[i]<atk[i-1]+atk[i+1]) indexes.insert(i);
    }
    vector<int> ans(n,0);
    int round = 0;
    while(!indexes.empty()){
        ans[round++] = (indexes.size());
        for(auto index : indexes){
            int a = prev[index], b= nxt[index];
            prev[nxt[index]] = prev[index];
            nxt[prev[index]] = nxt[index];
            cout<<"("<<nxt[index]<<" "<<prev[nxt[index]]<<") ("<<prev[index]<<" "<<nxt[prev[index]]<<") ";
        }
        cout<<endl;
        set<int> temp;
        for(auto index: indexes){
            cout<<index<<"("<<nxt[index]<<","<<prev[index]<<") ";
            if(nxt[index]!=n+1 && def[nxt[index]] < atk[nxt[nxt[index]]] + atk[prev[nxt[index]]]) temp.insert(nxt[index]);
            if(prev[index]!=0 && def[prev[index]] < atk[prev[prev[index]]] + atk[nxt[prev[index]]]) temp.insert(prev[index]);
        }
        cout<<":";
        indexes.clear();
        indexes = temp;
        temp.clear();
    }
    for(auto e : ans) cout<<e<<" ";
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}