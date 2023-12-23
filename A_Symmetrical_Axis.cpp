#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll rows,columns;
    cin>>rows>>columns;
    vector<vector<ll>> v(rows,vector<ll>(columns,0));
    for(ll i=0;i<rows;i++){
        
        for(ll j=0;j<columns;j++){
            cin>>v[i][j];
        }
    }
    ll counter =0;
    for(ll i=0;i<rows;i++){
        ll start = 0,end = columns -1;
        ll temp = 0;
        while(start<=end){
            if(v[i][start]!=v[i][end]) temp++;
            start++;end--;
        }
        counter += (temp/2 + temp%2);
    }
    cout<<counter<<endl;
    
}