#include<bits/stdc++.h>
using namespace std;
int garr[10000001];
int typeCheck(int x){
    int fdigit = x%10;
    int odigit = x/10;
    if(odigit%2==0){
        if(fdigit==1||fdigit==2||fdigit==4||fdigit==8){
            return 2;
        }else if(fdigit==5||fdigit==0){
            return 3;
        }else return 1;
    }else{
        if(fdigit==1||fdigit==2||fdigit==4||fdigit==8){
            return 1;
        }else if(fdigit==5||fdigit==0){
            return 3;
        }else return 2;
    }
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    if(n==1){
        cout<<"Yes"<<endl;
        return;
    }
    int init = typeCheck(arr[0]);
    for(int i=1;i<n;i++){
        int type = typeCheck(arr[i]);
        if(type!=init){cout<<"No"<<endl;return;}
    }
    if(init==3){
       for(int i=0;i<n;i++){
        if(arr[i]%10==5)arr[i]+=5;
       }
       for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            cout<<"No"<<endl;
            return;
        }
       }
       cout<<"Yes"<<endl;
       return;
    }else
    cout<<"Yes"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}