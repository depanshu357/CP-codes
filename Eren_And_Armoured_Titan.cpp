#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int solve(vector<int>dmg,vector<int>timstp,int hp,int s,int e){
     int mid=(s+e)/2;
      if(dmg[0]>=hp ){return timstp[0];}
     while(s<=e){
     if(mid==(e) && dmg[e]<hp) return -1;
     else if(mid+1 <= e){if(dmg[mid]<hp && dmg[mid+1]>=hp){ return timstp[mid+1]; }}
     else if(mid>0){if(dmg[mid-1]<hp && dmg[mid]>=hp){return timstp[mid];}}
     else if(mid==e && dmg[mid]>=hp){return timstp[mid];}
     else if(dmg[mid]>hp){ return solve(dmg,timstp,hp,s,mid);}
     else if(dmg[mid]<hp){ return solve(dmg,timstp,hp,mid+1,e);} 
     }
}
int main(){
    int n,m;
    cin>>n>>m;
    int a,b,h;
    vector<int> dmg,timstp,hp;
    for(int i=0;i<n;i++) {cin>>a;dmg.push_back(a);}
    for(int i=0;i<n;i++) {cin>>b;timstp.push_back(b);}
    for(int i=0;i<m;i++) {cin>>h;hp.push_back(h);}
    for(int i=0;i<m;i++){
        cout<<solve(dmg,timstp,hp[i],0,n-1)<<" ";
    }

    return 0;
}