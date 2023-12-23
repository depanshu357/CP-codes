#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int  a[n],b[n];
    for(int i=0;i<n;i++){char test;cin>>test;a[i]=test-'0';}
    for(int i=0;i<n;i++){char test;cin>>test;b[i]=test-'0';}
    int count1a=0,count1b=0,count1=0;
    for(int i=0;i<n;i++){count1a+=a[i];count1b+=b[i];count1+=(a[i]^b[i]);}
    if(count1==n){
        if(count1a==0){
          cout<<"YES\n3\n";
          for(int i=0;i<n;i++)cout<<"2 "<<n<<endl;
          cout<<"1 "<<n<<endl;
          cout<<"1 1\n";  
        }else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(a[i]){
                    cout<<i<<" "<<i<<endl;
                }
                cout<<"1 1"<<endl;
            }
        }
    }else if(count1==0){
        if(count1a==0){cout<<"YES\n0\n";}
        else{
            
        }
    }else{
        cout<<"NO\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}