#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    stack<int> st;
    vector<int> left(n);
    int arr_max =0;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            st.pop();
        }
        if(st.empty()) left[i] = -1;
        else left[i] = arr[st.top()];
        st.push(i);
        arr_max =  max(arr_max,arr[i]);
    }
    int maxi = -1;
    for(int i=0;i<n;i++) maxi = max(maxi,left[i]);
    if(maxi==-1){cout<<"-1\n";return;}
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}