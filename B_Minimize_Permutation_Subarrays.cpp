#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    vector<int> arr(n);
    ll maxPos = 0;
    ll maxi = 0;
    ll pos1,pos2,pos3 = 0;
    for(ll i=0;i<n;i++) {
        cin>>arr[i];
        if(maxi < arr[i]) maxi = arr[i];
        if(maxi == arr[i]) maxPos = i;
        if(arr[i]==1) pos1 = i;
        else if(arr[i]==2) pos2 = i;
        else if(arr[i]==3) pos3 = i;
    }
    if(pos1 < maxPos && maxPos < pos2){
        cout<<"1 1\n";
    }else if( pos2< maxPos && maxPos < pos1){
        cout<<"1 1\n";
    }else if(pos1 < maxPos && pos2 < maxPos){
        if(pos2>pos1) cout<<pos2+1<<" "<<maxPos+1<<'\n';
        else cout<<pos1+1<<" "<<maxPos+1<<'\n';
    }else if(pos2 > maxPos && pos1 > maxPos){
        if(pos1>pos2) cout<<pos2+1<<" "<<maxPos+1<<'\n';
        else cout<<pos1+1<<" "<<maxPos+1<<'\n';
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}