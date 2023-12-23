#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;cin>>k;
    int l = 1;int r = 1e9;
    while(l<=r){
        int mid = l + (r-l)/2;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += (arr[i]/mid);
            if(arr[i]%mid) sum+=1;
        }
        if(sum<=k){r = mid-1;}
        else l = mid+1;
    }
    cout<<l<<'\n';
}