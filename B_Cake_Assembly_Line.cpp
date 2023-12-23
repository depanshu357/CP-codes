#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,w,h;cin>>n>>w>>h;
    int arr[n],brr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
    int minShift = 0;
    int maxShift = 1e9;
    if(brr[0]-h<arr[0]-w){
        minShift = 0;
        maxShift = 1e9;
    }else{
        maxShift= 0;
        minShift = 1e9;
    }
    for(int i=0;i<n;i++){
        // assuming brr[0]<arr[0]
        if(brr[0]-h<arr[0]-w){
            if(brr[i]-h>=arr[i]-w) {cout<<" k ";continue;}
        // if(arr[i]-w-(brr[i]-h)<0 || arr[i]+w-(brr[i]+h)) {cout<<"NO1\n";continue;}
        minShift = max(minShift,abs(arr[i]-w-(brr[i]-h)));
        maxShift = min(maxShift,abs(arr[i]+w-(brr[i]+h)));
        }else{
            if(brr[i]-h<arr[i]-w){cout<<" o ";continue;}
            // if((arr[i]-w-(brr[i]-h))<0 || (arr[i]+w-(brr[i]+h))<0) {cout<<"NO2\n";continue;}
            minShift = min(minShift,abs(arr[i]-w-(brr[i]-h)));
            maxShift = max(maxShift,abs(arr[i]+w-(brr[i]+h)));
        }
    }
    int center = (maxShift + minShift)/2;
    for(int i=0;i<n;i++){
         if(brr[0]-h<arr[0]-w){
        brr[i] += center;
         }else{
            brr[i] -= center;
         }
    }
    for(int i=0;i<n;i++){
        if(brr[i]-h>=arr[i]-w && brr[i]+h<=arr[i]+w){
            cout<<" K ";
        }else{
    cout<<maxShift<<" "<<minShift<<" ";
            cout<<"N\n";;
        }
    }
    cout<<maxShift<<" "<<minShift<<" ";
    // if(minShift<=maxShift)cout<<"YES\n";
    // else cout<<"NO\n";
    cout<<"YES\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}