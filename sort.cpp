#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int w,a;
    cin >> w;
    // vector<int > g;
    int g[w];
    while(w--){
        cin >> a;
        g[w-1]=a;
    }
    int n = sizeof(g)/sizeof(g[0]);
    sort(g,g+n);    
    for(int i=0;i<n;i++) cout << g[i]<<" ";
    return 0;
}