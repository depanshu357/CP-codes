#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
bool checkBlack(string &s,int i){
    if(s[i]!='b') return false;
    if(s[i-1]!='b' || s[i+1]!='b') return false;
    // if(i+2 < s.size() && s[i+2]=='b') return false;
    // if(i-2>=0 && s[i-2]=='b') return false;
    return true;
}
bool checkWhite(string &s,int i){
    if(s[i]!='w') return false;
    if(s[i-1]!='w' || s[i+1]!='w') return false;
    // if(i+2 < s.size() && s[i+2]=='w') return false;
    // if(i-2>=0 && s[i-2]=='w') return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int black = 0,white = 0;
    int n = s.size();
    for(int i=1;i<n-1;i++){
        if(checkBlack(s,i)) black++;
        else if(checkWhite(s,i)) white++;
    }
    if(white > black) cout<<"wendy\n";
    else if(black > white) cout<<"bob\n";
    else if(white==black) cout<<"bob\n";
}