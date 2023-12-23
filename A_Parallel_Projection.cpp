#include<bits/stdc++.h>
using namespace std;
void solve(){
    int w,d,h;cin>>w>>d>>h;
    int a,b,f,g;cin>>a>>b>>f>>g;
    int ans = h;
    int ans1= h,ans2=h;
    ans1+=(abs(f-a));
    int temp1= b+g;
    int temp2= (2*d-b-g);
    ans1+=(min(temp1,temp2));
    ans2+=((abs(g-b)));
    temp1=a+f;
    temp2=(2*w-a-f);
    ans2+=(min(temp1,temp2));
    cout<<min(ans1,ans2)<<endl;
}
int main(){
    int t;
    cin>>t;while(t--)solve();
}