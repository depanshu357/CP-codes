#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool check(int x,int y,vector<vector<char>> &arr){
    int count =0;
    for(int i=0;i<3;i++){
        if(arr[x][i]==arr[x][y]) count++;
    }
    if(count==3) return true;
    count =0;
    for(int i=0;i<3;i++){
        if(arr[i][y]==arr[x][y]) count++;
    }
    if(count==3) return true;
    count = 0;
    for(int i=0;i<3;i++){
        if(arr[i][i]==arr[x][y]) count++;
    }
    if(count==3) return true;
    count = 0 ;
    for(int i=0;i<3;i++){
        if(arr[i][2-i] == arr[x][y]) count++;
    }
    if(count==3) return true;
    return false;
}
void solve(){
    vector<vector<char>> arr(3,vector<char>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(check(i,j,arr) && arr[i][j]!='.'){
                
                cout<<arr[i][j]<<'\n';
                return ;
            }
        }
    }
    cout<<"DRAW\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}