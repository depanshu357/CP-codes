#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    double n,d,h;
    cin>>n>>d>>h;
    vector<double> heights(n);
    for(int i=0;i<n;i++) cin>>heights[i];
    sort(heights.begin(),heights.end());
    double prev_height = -2.0;
    double ratio = (d)/(h);
    double area = 0.0;
    // cout<<setprecision(7)<<area;
        area += (h*d)/(double)2.0;
        area = area*n;
    for(int i=1;i<n;i++){
        // if(prev_height > heights[i]){
        //     area -= (((-heights[i]+prev_height))*(-heights[i]+prev_height)*(ratio))/(double)2.0;
        // }
        if(heights[i-1] + h > heights[i]){
            // area -= (h*d)/2.0;
            // double temp1 = ((heights[i-1] + h - heights[i])/h)*(h*d/2.0);
            // area -= temp1;
            area -= (((heights[i-1] + h - heights[i])/h)*((heights[i-1] + h - heights[i])/h))*(h*d)/2.0;
        }
        prev_height = heights[i] + h;
    }
    // cout<<area<<'\n';
    printf("%0.6f\n",area);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)solve();
}