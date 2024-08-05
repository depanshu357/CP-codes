#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    int evenCount = 0;
    int oddMax = 0, evenMax = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) {evenCount++;evenMax = max(evenMax,v[i]);}
        else oddMax = max(oddMax,v[i]);
    }
    if(evenCount==n) {cout<<"0"<<endl;return;}
    sort(v.begin(),v.end());
    int prevEven = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) {
            prevEven = max(prevEven,v[i]);
            if(prevEven<oddMax) count++;
            else {cout<< evenCount + 1<< endl;return;}
            oddMax = max(oddMax,oddMax+v[i]);
        }
    }
    cout<<count<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}