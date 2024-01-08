#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<"1\n";return;
    }
    if(n==3){cout<<"169\n196\n961\n";return;}
    int t = 3;
    vector<string> temp = {"169","196","961"};
    while(t!=n){
        for(int i=0;i<temp.size();i++){
            temp[i] = temp[i].append("00");
        }
        string s1 = "1";
        string s2 = "9";
        for(int i=0;i<(t-1)/2;i++){
            s1.append("0");s2.append("0");
        }
        s1.append("6");s2.append("6");
        for(int i=0;i<(t-1)/2;i++){
            s1.append("0");s2.append("0");
        }
        s1.append("9");s2.append("1");
        temp.push_back(s1);
        temp.push_back(s2);
        t+=2;
    }
    for(int i=0;i<n;i++) cout<<temp[i]<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> v1 = {"1"};
    vector<string> v3={"169","196","961"};
    int t;cin>>t;
    while(t--)solve();
}