#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n;cin>>n;
    vector<vector<int>> v(n);
    vector<bool> isStatisfied(n+1,false);
    isStatisfied[0]=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
        int a;cin>>a; 
        v[i].push_back(a);
        }
    }
    vector<int> ans(2*n+1,0);
    for(int i=0;i<n-1;i++){
        ans[2*i+1] = v[0][i];
        isStatisfied[v[0][i]]=true;
    }
    int remain=0;
    for(int i=1;i<=n;i++){
        if(!isStatisfied[i]){remain=i;break;}
    }
    int left1 =0 ,right1 = 2*n;
    int left2 =0,right2=2*n;
    for(int i=0;i<n-1;i++){
            if(v[1][i]==remain){
                if(i-1>=0){
                left1 = v[1][i-1];
                }
                if(i+1<n-1)
                right1 = v[1][i+1];
            }
            if(v[2][i]==remain){
                if(i-1>=0){
                left2 = v[2][i-1];
                }
                if(i+1<n-1)
                right2 = v[2][i+1];
            }
    }
    int left =0,right=0;
    int flag=0;
    for(int i=0;i<n-1;i++){

        if(left1==0 && left2==0){
             ans[0]=remain;flag=1;break;
        }
        if(right1==2*n && right2==2*n){
            ans[2*n]=remain;flag=1;break;
        }
        if(v[1][i]==remain){
            if(i-1>=0){left=v[1][i-1];}
            if(i+1<n-1){right=v[1][i+1];}
            break;
        }
        if(v[2][i]==remain){
            if(i-1>=0){left=v[2][i-1];}
            if(i+1<n-1){right=v[2][i+1];}
            break;
        }
    }
    for(int i=0;i<(2*n+1);i++){
        if(ans[i]==0)continue;
        // if(left1 ==0 && left2==0 && i==1){cout<<remain<  < " k";}
        cout<<ans[i]<<" ";
        // if(right1==2*n && right2== 2*n && i == (2*n-3)){cout<<remain<<" o";}
        if(!flag)
        if((ans[i]==left1 || ans[i] == left2))cout<<remain<<" ";
        
    }
    int k=0,l=0;
    // int flag =0;
    // for(int i=0;i<n-1;i++){
    //     if(v[0][k]==v[1][l] || k==n || l==n){cout<<v[flag][k]<<" ";k++;l++;}
    //     else if(v[0][k+1]==v[1][l]){cout<<v[0][k]<<" "<<v[0][k+1]<<" ";flag=1;k+=2;l++;}
    //     else if(v[0][k]==v[1][l+1]){cout<<v[1][l]<<" "<<v[1][l+1]<<" ";flag=0;k++;l+=2;}
    // }
    cout<<endl;


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}