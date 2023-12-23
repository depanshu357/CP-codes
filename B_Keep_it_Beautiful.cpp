#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int q;cin>>q;
    vector<int> arr(q);
    for(int i=0;i<q;i++){
        // int a;cin>>a;
        cin>>arr[i];
        // if(i==0) arr.push_back()
    }
    string ans;
    int flag = 0;
    int prev ,maxi;
    int st;
    for(int i=0;i<q;i++){
        if(i==0){ st = arr[i];prev = arr[i];ans.push_back('1');}
        else if(arr[i] >= prev){
            if(flag ==0){
                ans.push_back('1');
                prev = arr[i];
            }else{
                if(arr[i]<=st && arr[i]>=prev){
                    ans.push_back('1');
                    prev = arr[i];
                }else ans.push_back('0');
            }
        }else if(arr[i] < prev && flag==0){
            if(arr[i]<=st){
                ans.push_back('1');
                maxi = prev;
                prev = arr[i];
                flag = 1;
            }else ans.push_back('0');
        }else if(arr[i] < prev && flag==1){
            ans.push_back('0');
        }
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}