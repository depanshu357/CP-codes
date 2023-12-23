#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,q;cin>>n>>q;
    vector<int> v(n);
    vector<int> v1(n);
    for(int i=0;i<n;i++){cin>>v[i];
    int k= v[i];
    int temp = 0;
    while(k){
        temp += (k%10);
        k/=10;
      }
    v1[i]=temp;
    }

    vector<bool> isDone(n,false);
    for(int i=0,i<n;i++){
        int ins;
        if(ins==1){
            int l,r;cin>>l>>r;

        }else{
            cout<<v[i]<<endl;
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