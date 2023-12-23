#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    vector<int> preSum(n,0);
    vector<int> sufSum(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // if(arr[0]==1)
    // preSum[0]=1;
    // if(arr[n-1]==-1)
    // sufSum[n-1]=1;
    for(int i=1;i<n;i++) 
        if(arr[i-1] == 1)
            preSum[i] = preSum[i-1] + 1;
        else preSum[i] = preSum[i-1];
    for(int i = n-2;i>=0;i--)
        if(arr[i+1]==-1)
            sufSum[i] = sufSum[i+1] + 1;
        else sufSum[i] = sufSum[i+1];
    int currSum = -1;
    int pos =0;
    // cout<<currSum<<" ";
    for(int i=0;i<n;i++){
        int sum = 0;
        // cout<<preSum[i]<<" "<<sufSum[i]<<endl;
         sum = (preSum[i] + sufSum[i]);
        //  cout<<sum<<" ";
        if(currSum<sum){
            currSum = sum;
            pos = i;
        }
        // cout<<currSum<<" ";
    }
    cout<<currSum<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}