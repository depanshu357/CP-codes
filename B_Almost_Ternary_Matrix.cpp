#include<bits/stdc++.h>
using namespace std;
int n,m;
// void apply(vector<int,vector<int>> v,int i,int j,int action){
//     if(action==1){v[i][j]=1;v[i][j+1]=0;v[i+1][j]=1;v[i+1][j+1]=0;}
//     else if(action==2){v[i][j]}
// }
void solve(){
    cin>>n>>m;
    int arr[n+1][m+1];
    bool flag =true;
    // 0,1 -> 0 2,3->1
    int countRow =3;
    for(int i=0;i<n;i++){
        int countCol = countRow;
        if(countCol==3 ||countCol ==2){countCol=3;}
        else{countCol=1;}
        for(int i=0;i<m;i++){
            if(countCol==2 || countCol==3){cout<<"1 ";}
            else cout<<"0 ";
            countCol++;
            countCol%=4;
        }
            countRow++;
            countRow%=4;
        cout<<endl;
    }
    

}
int main(){
    int t;cin>>t;
    while(t--)solve();
}