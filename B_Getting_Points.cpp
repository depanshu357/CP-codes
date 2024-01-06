#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    ll days,points,l,t;
    cin>>days>>points>>l>>t;
    ll total_tasks = days/7;
    if(days%7) total_tasks += 1;
    ll cat1 = 2*t + 1*l;
    ll cat2 = 1*t + l;
    ll cat3 = l;
    if(total_tasks/2){
        if((total_tasks/2)*cat1 >= points){
            days -= points/cat1;
            points -= (points/cat1)*cat1;
            if(points) days-=1;
            cout<<days<<'\n';return;
        }else{
            points -= (total_tasks/2)*cat1;
            days -= total_tasks/2;
        }
    }
    if(total_tasks%2){
        points -= cat2;
        days-=1;
        if(points<=0) {cout<<days<<'\n';return;}
    }
    if(points){
        days-= points/cat3;
        points = points%cat3;
    }
    if(points) days-=1;
    cout<<days<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}