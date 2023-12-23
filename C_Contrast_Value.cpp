#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(arr.size()!=0 && a == arr[arr.size()-1])continue;
        arr.push_back(a);
    }
    vector<int> ans;
    int count = arr.size();
    for(int i=0;i<arr.size();i++){
        // cout<<count<<" ";
        //decreasing
        if(i+2 <= arr.size()-1 && arr[i]<arr[i+1] && arr[i+1]<arr[i+2]){
            count--;
            
        }
        else if(i+2 <= arr.size()-1 && arr[i]>arr[i+1] && arr[i+1]>arr[i+2]) count--;
    }

    cout<<count<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}