#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
long long findComb(long long m,string &l,string &r,string &s,long long index,vector<long long> &count,long long counter,vector<vector<long long>> &count2,long long index2,vector<vector<long long>> &dp){
    if(index == l.size()) return false;
    bool flag = false;
    if(dp[index][index2]!=-1) return dp[index][index2];
    for(long long i = l[index]-'0';i<=r[index]-'0';i++){
        long long check =0;
        long long temp = index2;
        while(index2 < s.size() && s[index2]!=i+'0'){
            index2++;
        }
        if(index2 == s.size()) return dp[index][index2] =  true;
        // cout<<char(i+'0')<<" k"<<counter<<" m"<<count[i]<<" ";
        flag = flag || findComb(m,l,r,s,index+1,count,counter,count2,index2+1,dp);
        index2 = temp;
    }
    if(flag) return dp[index][index2] = true;
    else return dp[index][index2] = false;
}
void solve(){
    string s;
    cin>>s;
    long long m;
    string l,r;
    cin>>m;
    cin>>l>>r;
    vector<long long> count(10,0);
    vector<vector<long long>> count2(s.size(),vector<long long>(10,0));
    string pass;
    vector<vector<long long>> dp(m+1,vector<long long>(s.size()+1,-1));
    long long counter = 0;
    for(long long i=0;i<s.size();i++){
        count[s[i]-'0']++;
        count2[0][s[i]-'0']++;
    }
    for(long long i=1;i<s.size();i++){
        count2[i] = count2[i-1]; 
        count2[i][s[i-1]-'0']--;
    }
    // for(long long i=0;i<9;i++) cout<<count[i]<<" ";
    if(findComb(m,l,r,s,0,count,counter,count2,0,dp)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;cin>>t;
    while(t--)solve();
}