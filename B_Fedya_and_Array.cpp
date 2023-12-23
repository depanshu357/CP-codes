#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int y,x;
    cin>>y>>x;
    int mid = (y+x)/2;
    vector <int>ans;
    // if(y>=0 && x<=0){

    // for(int i=0;i<y;i++){
    //     // cout<<"0 1 ";
    //     ans.push_back(0);
    //     ans.push_back(1);
    // }
    // for(int i=0;i<abs(x);i++){
    //     // cout<<"0 -1 "; 
    //     ans.push_back(0);
    //     ans.push_back(-1);
    // }
    // }
    // if(y>0 && x>0){
    //     int k = mid;
    //     while(k!=y){
    //         // cout<<mid<<" "<<++k<<" ";
    //         ans.push_back(++k);
    //     }
    //     while(k!=x){
    //         // cout<<mid<<" "<<--k<<" ";
    //         // ans.push_back(mid);
    //         ans.push_back(--k);
    //     }
    //     while(k!=mid){
    //         ans.push_back(++k);
    //     }
    // }
    // if(y<0 && x<0){
    //     int k = mid;
    //     while(k!=x){
    //         // cout<<mid<<" "<<--k<<" ";
    //         ans.push_back(--k);
    //     }
    //     while(k!=y){
    //         // cout<<mid<<" "<<++k<<" ";
    //         // ans.push_back(mid);
    //         ans.push_back(++k);
    //     }
    //     while(k!=mid){
    //         ans.push_back(--k);
    //     }
    // }
    int k = mid ;
    while(k!=y){
        ans.push_back(++k);
    }
    while(k!=x){
        ans.push_back(--k);
    }
    while(k!=mid){
        ans.push_back(++k);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}