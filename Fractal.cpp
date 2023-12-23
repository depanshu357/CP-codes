#include<iostream>
#include<vector>
using namespace std;
void solve(int n,int k,char arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        printf("\n");
    }

}
int main(){
    int n,k;
    cin >>n>>k;
    scanf("\n");
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        scanf("\n");
    }
    solve(n,k,arr);
    return 0;
}