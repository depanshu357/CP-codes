#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][2];
        int maxx=0,maxy=0,miny=0,minx=0;
        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
            if(arr[i][0]==0){
                if(maxy<arr[i][1]){
                    maxy=arr[i][1];
                }
                if(miny>arr[i][1]){
                    miny=arr[i][1];
                }
            }
            else if(arr[i][1]==0){
                if(maxx<arr[i][0]){
                    maxx=arr[i][0];
                }
                if(minx>arr[i][0]){
                    minx=arr[i][0];
                }
            }
        }
        int sum= 2*(abs(minx)+abs(maxx)+abs(maxy)+abs(miny));
        cout<<sum<<endl;
    }
}