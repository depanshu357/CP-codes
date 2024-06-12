#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int calc(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
void solve(){
    int n,x;
    cin>>n>>x;
    if(calc(n)%x==0) cout<<n<<endl;
    else {
        while(calc(n)%x) n++;
        cout<<n<<endl;
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}