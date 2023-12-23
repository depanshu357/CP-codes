#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long  n;
    cin >> n;

    long long count=0;
    for(long long i=1;(i*(i+1))/2 < n;i++){
        // double a = (1.0*n - (i*(i+1))/2)/(i+1);
        // if(a - int(a) == 0.0) count++;
        if(((n - (i*(i+1))/2) % (i+1))==0  ) count++;
        
    }
    cout<<count;
}