#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
vector<bool> isPrime(1e5+1,true);
vector<int> primeColl;
void sieve(){
    isPrime[1]=isPrime[0]=false;
    int max = 1e5+1;
    for(int i=2;i*i<max;i++){
        for(int j=2*i;j<max;j+=i){
            isPrime[j]=false;
        }
    }
    for(int i=2;i<max;i++){
        if(isPrime[i]){primeColl.push_back(i);}
    }
}
void solve(){
    int n;cin>>n;
    map<int,int> pFac;
    int msize = 1;

    for(int i=0;i<primeColl.size();i++){
        while(n%primeColl[i]==0 && n!=0){
            pFac[primeColl[i]]++;
            n/=primeColl[i];
            // cout<<n<<" ";
            if(msize<pFac[i])msize=pFac[i];
            // cout<<primeColl[i]<<" "<<pFac[primeColl[i]]<<" t ";
        }
        // while(n%i==0){
        //     pFac[i]++;
        //     if(msize<pFac[i])msize=pFac[i];
        //     n/=i;
        // }
    }
    if(n!=1){
        pFac[n]++;
    }
    vector <int> pairs(1e5,1);
    for(auto it: pFac){
        int counter = 0;
        // cout<<it.first<<" "<<it.second<<" k ";
        while(it.second){
            pairs[counter] = pairs[counter]*(it.first);
            it.second= it.second-1;
            counter++;
            // cout<<it.first<<" K ";
        }
    }
    int ans=0;
    for(int i=0;i<1e5;i++){
        if(pairs[i]!=1){
            // cout<<pairs[i]<<" p ";
        ans+=(pairs[i]);
        }
        else break;
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    int t;cin>>t;
    while(t--)solve();
}