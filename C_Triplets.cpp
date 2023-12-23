#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int binomial(int n,int r){
    if (r > n) return 0;
    // If r is 0 or equal to n, return 1
    if (r == 0 || n == r) return 1;
    // Initialize the logarithmic sum to 0
    double res = 0;
    // Calculate the logarithmic sum of the numerator and denominator using loop
    for (int i = 0; i < r; i++) {
        // Add the logarithm of (n-i) and subtract the logarithm of (i+1)
        res += log(n-i) - log(i+1);
    }
    // Convert logarithmic sum back to a normal number
    return (int)round(exp(res));
}
void solve(){
    int n;cin>>n;
    vector<int> arr1(n),arr2(n);
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    map<int,int> mp;
    int count = 0;
    vector<int> freq(n,0);
    for(int i=0;i<n;i++){
        mp[arr1[i]]++;
        mp[arr2[i]]++;
        if(mp[arr1[i]] == 2) count++;
        if(arr1[i] != arr2[i] && mp[arr2[i]] == 2) count++;
        freq[i] = count;
    }
    int total = 0;
    for(int i=2;i<n;i++){
        cout<<freq[i]<<" ";
        if(freq[i]>=3){
            total += (binomial(freq[i-1],2));
            // cout<<total<<" ";
        }
    }
    cout<<total<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}