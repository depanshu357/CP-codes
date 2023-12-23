#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    vector<int> v;
    v.push_back(1);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){count++;v.push_back(i+2);}
        else v.push_back(1);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}