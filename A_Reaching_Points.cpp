#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
bool check(int x1,int y1,int x2,int y2){
    if(x1==x2 && y1==y2) return true;
    else if(x1 > x2 || y1 > y2) return false;
    return check(x1+y1,y1,x2,y2) | check(x1,x1+y1,x2,y2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(check(x1,y1,x2,y2)) cout<<"Yes\n";
    else cout<<"No\n";
    
}