#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;
        v.push_back(temp);
    }
    vector <int> localMin,localMax;
    if(n<4){cout<<"-1\n";return;}
    for(int i=1;i<n-1;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            localMax.push_back(i);
        }
        if(v[i]<v[i-1] && v[i]<v[i+1]){
            localMin.push_back(i);
        }

    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}