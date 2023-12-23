#include<bits/stdc++.h>
using namespace std;
const long long INF =1ll<<32;
int main(){
    int n;
    cin>>n;
    long long res=0;
    stack<long long> c;
    c.push(1);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s == "for"){
            int x;
            cin>>x;
            c.push(min(INF,c.top()*x));
        }
        else if(s== "end"){
            c.pop();
        }else{
            res+=c.top();
        }
        
    }
    if(res>=INF) cout<<"OVERFLOW!!!";
    else cout<<res;
    return 0;
}