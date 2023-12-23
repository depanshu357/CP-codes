#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int count =0;
    if(n==1){cout<<"0\n";return;}
    int flag = 0;
    sort(v.begin(),v.end());
    int mini = v[0],maxi = v[n-1];
    vector<int> ansArr;
    while(v[n-1]!=v[0]){
        if(v[0]%2 && v[n-1]%2==0){
            ansArr.push_back(1);
            v[0]+=1;
        }else ansArr.push_back(0);
        v[n-1]=v[n-1]/2;
        v[0]=v[0]/2;
        count++;
    }
    if(count<=n){
        cout<<count<<'\n';
        for(int i=0;i<ansArr.size();i++)cout<<ansArr[i]<<" ";
        cout<<'\n';
    }else cout<<count<<'\n';


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}