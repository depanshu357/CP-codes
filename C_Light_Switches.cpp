#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    int maxi = 0;
    for(int i=0;i<n;i++) {cin>>v[i];maxi = max(maxi, v[i]);}
    int left = INT_MIN, right  = INT_MAX;
    for(int i=0;i<n;i++){
        int diff = 0;
        if(v[i] + k <= maxi){
            diff =  (maxi - (v[i] + k))/(2*k) ;
            if((maxi - (v[i] + k))%(2*k)) diff += 1;
        } 
        left = max(left, v[i] + diff*2*k);
        right = min(right, v[i] + diff*2*k + k);
    }
    if(left<right) cout<<left<<endl;
    else cout<<-1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}