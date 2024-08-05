#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s.size()==1){
        for(char c = 'a';c<='z';c++){
            if(s[0]!=c){
                string temp;
                temp.push_back(c);
                cout<<s+temp<<endl;
                return;
            }
        }
    }else{
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                for(char c = 'a';c<='z';c++){
                    if(s[i]!=c){
                        string temp;
                        temp.push_back(c);
                        cout<<s.substr(0,i+1)+temp+s.substr(i+1)<<endl;
                        return;
                    }
                }
            }
        }
        for(char c = 'a';c<='z';c++ ){
            if(s[0]!=c && s[1]!=c){
                string temp;
                temp.push_back(s[0]);
                temp.push_back(c);
                temp.append(s.substr(1));
                cout<<temp<<endl;
                return;
            }
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--) solve();
    
}