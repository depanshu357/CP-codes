#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>k>>n;
    int base = 1;int add= 0;
    int count=0;
    for(int i=1;i<=40;i++){
        if(add<=n-k)count++;
        else break;
        add+=i;

    }
    count;
    add=0;
    for(int i=0;i<count && i<k;i++){
        // cout<<"c";
        base+=add;
        add++;
        cout<<base<<" ";
        // cout<<i<<" ";
    }
    for(int i=count;i<k;i++){
        // cout<<"k";
        if(i==k-1)cout<<n<<" ";
        else{cout<<(++base)<<" ";}
        // cout<<i<<" ";
    }
    cout<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){solve();}
}