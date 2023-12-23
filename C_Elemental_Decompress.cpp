#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[n];
    int count[n+1];
    int outOfBound =0;
    int doubleCount = 0;
    vector<vector<int>> v(n+1);
    map <int,int> mp;
    for(int i=0;i<=n;i++)count[i]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count[arr[i]]++;
        mp[arr[i]]=i;
        if(count[arr[i]]>2)outOfBound=1;
        if(count[arr[i]]==2)doubleCount++;
        v[arr[i]].push_back(i);
    }
    if(outOfBound){cout<<"NO\n";return;}
    int p1[n],p2[n];
    for(int i=0;i<n;i++){p1[i]=0;p2[i]=0;}
    stack<int> help1,help2;
    for(int i=0;i<n;i++){
        if(count[i+1]==0){help1.push(i+1);help2.push(i+1);} 
    }
    map<int,int> positions1,positions2;
    for(int i=0;i<n;i++){
        if(count[arr[i]]==2){
            // cout<<v[arr[i]][0]<<" "<<v[arr[i]][1]<<endl;
            p1[v[arr[i]][0]]=arr[i];
            p2[v[arr[i]][1]]=arr[i];
            positions1[arr[i]]=v[arr[i]][0];
            positions2[arr[i]]=v[arr[i]][1];
            // count[arr[i]]=0;
            // cout<<arr[i]<<count[5]<<" ";
        }else{
            p1[v[arr[i]][0]]=arr[i];
            p2[v[arr[i]][0]]=arr[i];
            // count[arr[i]]--;
        }
    }
    // for(int i=0;i<n;i++){cout<<count[5]<<" ";}
    for(int i=n;i>=1;i--){
        // if(p2[v[i][0]]==0){p1[v[i][0]]=help1.top();help1.pop();}
        // cout<<p1[i]<<" ";
        if(count[i]==2){
            p1[positions2[i]]= help1.top();
            help1.pop();
        }

        }
    // // cout<<endl;
    for(int i=n;i>=1;i--){
        // if(count[n]==2)
        // if(p1[v[i][1]]==0){p2[v[i][1]]=help2.top();help2.pop();}
        // cout<<p2[i]<<" ";
        if(count[i]==2){
            p2[positions1[i]]= help2.top();
            help2.pop();
        }
        }
    // cout<<endl;
    for(int i=0;i<n;i++){
        if(max(p1[i],p2[i])!=arr[i]){cout<<"NO\n";return;}
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)cout<<p1[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)cout<<p2[i]<<" ";
    cout<<endl;


}
int main(){
    int t;cin>>t;
    while(t--)solve();
}