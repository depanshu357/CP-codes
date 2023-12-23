#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int count1 =0,countm1 =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1) count1++;
        else countm1++;
    }
    if(count1 >= countm1){
        if(countm1%2) cout<<"1\n";
        else cout<<"0\n";
        return ;
    }else{
        int oper = 0;
        if(countm1%2){
         oper+=1;
        countm1--;
        count1++;
        }
            // cout<<countm1 <<" "<<count1<<" ";
        if(countm1 > count1){
            int help = (countm1 - count1 + 1)/2;
        oper += (help) ;
        if(help%2) oper++;
        }
        cout<<oper<<"\n";return;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}