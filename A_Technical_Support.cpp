#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    stack<char> s;
    int flag=1;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='Q'){
            s.push(c);
        }else{
            if(s.empty()){
                //do nothing
            }else{
                s.pop();
            }
        }
    }
    if(s.empty())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}