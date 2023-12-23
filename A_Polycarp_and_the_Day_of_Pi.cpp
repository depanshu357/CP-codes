// 3.1415926535 89793238462643383279
#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s = "3141592653589793238462643383279";
    int ans =0;
    string gi ;
    cin>>gi;
    for(int i=0;i<gi.size();i++){
        if(s[i]==gi[i])ans++;
        else{break;}
    }
    cout<<ans<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}