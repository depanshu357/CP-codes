#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
const int maxN = 2e5 + 5;
int arr[maxN];
int prv[maxN],nxt[maxN];
bool in[maxN];
bool good(int i,int n){
    if(i<1 || i>n){
        return 0;
    }
    return arr[i]==arr[prv[i]]+1 || arr[i]==arr[nxt[i]]+1;
}
void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        prv[i] = i-1;
        nxt[i] = i+1;
        cin>>arr[i];
        in[i]=0;
    }
    arr[n+1]=arr[0]=-2;
    priority_queue<pair<int,int>> pq;
    for(int i=1;i<=n;i++){
        if(good(i,n)){
            in[i] = 1;
            pq.push({arr[i],i});
        }
    }
    while(!pq.empty()){
        auto it = pq.top();pq.pop();
        int index = it.second;
        prv[nxt[index]] = prv[index];
        nxt[prv[index]] = nxt[index];
        if(!in[prv[index]] && good(prv[index],n)){
            in[prv[index]] = 1;
            pq.push({arr[prv[index]],prv[index]});
        }
        if(!in[nxt[index]] && good(nxt[index],n)){
            in[nxt[index]] = 1;
            pq.push({arr[nxt[index]],nxt[index]});
        }
    }
    int bad = 0,mini = n;
    for(int i=1;i<=n;i++){
        mini = min(mini,arr[i]);
        if(!good(i,n)){
            bad+=1;
        }
    }
    if(bad==1 && mini==0) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}