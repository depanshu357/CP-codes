#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;
    cin>>n;
    int counter=3,flag=0;
    int i =1;
    int alice =0,bob =0;
    while(n){
        if(n>=i){
            if(counter == 3 || counter == 2){
                alice+=(i);
            }else{
                bob+=(i);
            }
            n-=i;
        }else{
            if(counter == 3 || counter == 2){
                alice+=(n);
            }else{
                bob+=(n);
            }
            n=0;
        }
        i++;
        counter++;
        counter%=4;
    }
        cout<<alice<<" "<<bob<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}