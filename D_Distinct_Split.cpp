#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    map<char,int> mp1,mp2;
    int f1 = 0,f2 = 0;
    for(int i=0;i<n;i++){
        if(i==0){mp1[s[i]]++;f1++;}
        else{
            if(mp2.find(s[i])==mp2.end()){f2++;}
            mp2[s[i]]++;
        }
    }
    int ans = f1+f2;
    for(int i=1;i<n-1;i++){
        if(mp1.find(s[i])==mp1.end()){f1++;mp1[s[i]]++;}
        mp2[s[i]]--;
        if(mp2[s[i]]==0)f2--;
        // cout<<ans<<" ";
        ans = max(f1+f2,ans);
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