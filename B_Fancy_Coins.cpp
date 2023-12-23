#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int m,k,a1,ak;
    cin>>m>>k>>a1>>ak;
    int temp = m/k;
    int rem = m - min(temp,ak) * k;
    int rem_first = rem - a1;
    int rem_last = rem;
    if(rem_first<=0){
        cout<<"0\n";
        return;
    }
    // cout<<rem_first<<" "<<rem_last<<"\n";
    int min_coins_required = m;
    int l = rem_first,r = min(rem_last,rem_first + k-1);
    // for(int i=rem_first;i<=min(rem_last,rem_first + k-1);i++){
    //     int cost = (i/k) + (i%k);
    //     min_coins_required = min(cost,min_coins_required);
    // }
    int required = k - l%k + l;
    if(required <= rem_last) cout<< l/k + 1<<'\n';
    else cout<< l/k + l%k <<'\n';
    // cout<<required<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}