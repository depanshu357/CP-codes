#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> arr,brr;
    arr.push_back(INT_MAX);
    brr.push_back(INT_MAX);
    arr.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i]==arr.back()) arr.push_back(v[i]);
        else if(v[i]==brr.back()) brr.push_back(v[i]);
        else if(v[i]<arr.back() && v[i]<brr.back()){
            if(arr.back()<brr.back())arr.push_back(v[i]);
            else brr.push_back(v[i]);
        }else if(v[i]>arr.back() && v[i]>brr.back()){
            if(arr.back()<brr.back())arr.push_back(v[i]);
            else brr.push_back(v[i]);
        }else if(v[i]>arr.back() && v[i]<brr.back()){
            brr.push_back(v[i]);
        }else arr.push_back(v[i]);
    }
    int count = 0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1])count++;
    }
    for(int i=1;i<brr.size();i++){
        if(brr[i]>brr[i-1])count++;
    }
    cout<<count<<'\n';
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}