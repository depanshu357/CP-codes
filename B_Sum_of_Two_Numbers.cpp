#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
int check(int n){
    if(n%10==9){return 1;}
    else return 0;
}
void solve(){
    int n;cin>>n;
    int x,y;
    if(n%2 == 1){
        x = n/2+1;
        y = n/2;
    }else{
        x = y = n/2;
    }
    if(n%10 != 9){

    cout<<x<<" "<<y<<endl;return;
    }
    int f =1 ;int temp1 =0,temp2=0;int toggle = 1;
    while(check(n) && n/10>0){
        if(toggle){

        temp1 += f*4;
        temp2 += f*5;
        toggle = 0;
        }else{
            temp1 += f*5;
            temp2 += f*4;
            toggle = 1;
        }
        n/=10;
        // cout<<n<<" "<<temp1<<" "<<temp2<<endl;
        f=f*10;
    }
    if(n%2==1){
    temp1 = (n/2 + 1)*f + temp1;
    }else 
    temp1 = (n/2)*f + temp1;
    temp2 += (n/2)*f;
    
    cout<<temp1<<" "<<temp2<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}