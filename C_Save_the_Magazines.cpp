#include<bits/stdc++.h>
using namespace std;
void swap(char *x,char *y){
    char temp = *x;
    *x=*y;
    *y = temp;
}
void solve(){
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k=1;
    // cout<<s<<" ";
    for(int i=0;i<n-1;i++){
        if(s[i]=='0' && s[i+1]=='1'){
            if(arr[i]>arr[i+1]){swap(s+i,s+i+1);}
            else{k++;}
            // cout<<"k"<<" "<<s<<" ";
        }else if(s[i]=='1' && s[i+1]=='1'){
            if(arr[i+1-k]>arr[i+1]){swap(s+i+1-k,s+i+1);k=1;}
            else{k++;}
            // cout<<"a"<<" "<<s<<" ";
            
        }else{
            k=1;
        }
    }
    int ans =0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')ans+=arr[i];
    }
    // for(int i=0;i<n;i++)cout<<s[i];
    cout<<" "<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}