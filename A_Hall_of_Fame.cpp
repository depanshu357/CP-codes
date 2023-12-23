#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;char c[n];
    for(int i=0;i<n;i++)cin>>c[i];
    int countL=0,countR=0;
    int posL=n,posR=-1;
    int pos = -1;
    for(int i=0;i<n;i++){
        if(posL>i && c[i]=='L')posL=i;
        if(posR<i && c[i]=='R')posR=i;
    }
    for(int i=0;i<n-1;i++){
        if(c[i]=='L' && c[i+1]=='R')pos=i;
    }

    for(int i=0;i<n;i++){if(c[i]=='L')countL++;
    else countR++;}
    if(countL==n || countR==n)cout<<"-1\n";
    else if(pos==-1)cout<<"0\n";
    else{cout<<pos+1<<endl;}
}
int main(){
    int t;
    cin>>t;
    while(t--){solve();}
}