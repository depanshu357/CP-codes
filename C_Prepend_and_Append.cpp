#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int x1 = 0,x2 = n-1;
    int length = n;
    while(1){
        if((int(s[x1]-'0'))^(int(s[x2]-'0')) == 1){
            length-=2;
            x1++;x2--;
            if(length<=0)break;
        }else break;
    }
    cout<<length<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}