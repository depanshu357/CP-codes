#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    string s;
    cin>>s;
    int size = 0,flag = 0;
    int prevSize = 0;
    int sorted=0,unsorted=INT_MAX;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            size++;
        }else if(s[i]=='-'){
            size--;
        }else if(s[i]=='1'){
            sorted = size;
        }else if(s[i]=='0'){
            if(unsorted == INT_MAX) unsorted = size;
        }
        if(sorted > size) sorted = size;
        if(size < unsorted) unsorted = INT_MAX;
        if((s[i]=='0' && size<2) || (s[i]=='1' && unsorted<=size) || (s[i]=='0' && sorted==size)){
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}