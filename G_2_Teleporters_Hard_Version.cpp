#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    int n,c;
    cin>>n>>c;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<bool> isVisited(n,false);
    vector<pair<int,int>> tC1(n),tC2(n);
    for(int i=0;i<n;i++){
        tC1[i].first = i+1+v[i];
        tC1[i].second = i;
    }
    for(int i=n-1;i>=0;i--){
        tC2[i].first = n+1 - i -1+ v[i];
        tC2[i].second = i;
    }
    sort(tC1.begin(),tC1.end());
    sort(tC2.begin(),tC2.end());
    int x1 =0,x2 =0;
    int ans=0,counter=0;
    // for(int i=0;i<n;i++){
    //     cout<<tC1[i].first<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<tC2[i].first<<" ";

    // }
    
    while(c>0){
        if(tC1[x1].first<=tC2[x2].first ){
            
            // cout<<" kasd ";
            if(isVisited[tC1[x1].second]){x1++;if(x1==n-1)break;continue;}
            else if(c-tC1[x1].first>=0){cout<<"M ";ans++;isVisited[tC1[x1].second]=true;c-=tC1[x1].first;x1++;if(x1==n-1 || x2== n-1)break;}
            else break;
        }else{
            // cout<<" oii ";
            if(isVisited[tC2[x2].second]){x2++;if(x2==n-1)break;continue;}
            else if(c-tC2[x2].first>=0){cout<<"K ";ans++;isVisited[tC2[x2].second]=true;c-=tC2[x2].first;x2++;if(x1==n-1 || x2== n-1)break;}
            else break;
        }
    }
        if(x1){
             if(tC1[x1].first<=tC2[x2].first ){
            
            // cout<<" kasd ";
            if(isVisited[tC1[x1].second]){x1++;}
            else if(c-tC1[x1].first>=0){cout<<"M ";ans++;isVisited[tC1[x1].second]=true;c-=tC1[x1].first;x1++;}
        }else{
            // cout<<" oii ";
            if(isVisited[tC2[x2].second]){x2++;}
            else if(c-tC2[x2].first>=0){cout<<"K ";ans++;isVisited[tC2[x2].second]=true;c-=tC2[x2].first;x2++;}
        }
        }else{
            
        }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}