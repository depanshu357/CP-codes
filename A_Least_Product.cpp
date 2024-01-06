#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    int zeroes=0,negatives=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0)negatives++;
        if(v[i]==0)zeroes++;
    }
    if(zeroes){
        cout<<"0\n";return;
    }
    if(negatives%2){
        cout<<"0\n";return;
    }
    cout<<"1\n1 0\n";return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}