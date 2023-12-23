#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool comparator(int x,int y){
    int j=1;
    int count1 =0;
    for(int j=1;j*j<=x;j++){
        count1+=2;
        if(j*j==x)count1--;
    }
    int count2 =0;
    for(int j=1;j*j<=y;j++){
        count2+=2;
        if(j*j==y)count2--;
    }
    return count1>=count2;
}
void solve(){
    ll n,m;cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    vector<bool> statisfied(m+1,false);
    vector<int> team;
    ll count = 1;
    for(ll i=0;i<n;i++){
        for(ll j=1;j*j<=arr[i];j++){
            if((arr[i]%j)==0 ){
                if((j<=m) && !statisfied[j] && j!=1){
                    
                    statisfied[j]=true;
                    count++;
                    team.push_back(arr[i]);
                    // cout<<"1k"<<arr[i]<<" ";
                }
                if(arr[i]/j <=m && !statisfied[arr[i]/j]){
                    statisfied[arr[i]/j]=true;
                    count++;
                    team.push_back(arr[i]);
                    // cout<<"2k"<<arr[i]<<" ";
                }
            }
        }
        if(count==m){break;}
    }
    if(count!=m){cout<<"-1\n";return;}
    cout<<team[0]-team[team.size()-1]<<endl;

    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}