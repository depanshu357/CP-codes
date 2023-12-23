#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,n;
    cin>>k>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int mod = 1e9 + 7;
    int rem = k%mod;
    int quo = k/mod;
    int size = sqrt(n);
    vector<vector<int>> curr(size,vector<int>(size));
    for(int i=0;i<size*size;i++){
        curr[i/size][i%size] = 
    }

}