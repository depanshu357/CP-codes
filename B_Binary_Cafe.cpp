#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int original = n;
     n = (log(n)*1.0)/(1.0*log(2));
    //  cout <<n<<" ";
     if(n==0){cout << "2\n";}
     else if(original + 1 <= pow(2,k) ){
        cout << original + 1<<'\n';
     }
    else{
        cout << int(pow(2,k))  << '\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}