#include <bits/stdc++.h>
using namespace std;
long long BinarySearch(long long step_height,long long maxstep[],long long n){
    long long l=0,r=n-1;
    while(1<r-l){
        long long mid = (l) + (r-l)/2;
        if(step_height>=maxstep[mid]){
            l=mid;
        }else{
            r=mid;
        }
    }
    return l;
}
void solve()
{
    long long n, q;
    cin >> n >> q;
    long long steps[n];
    long long query[q];
    long long sum[n];
    long long maxstep[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> steps[i];
        if (i == 0){
            sum[i] = steps[i];
            maxstep[i]=steps[i];   
        }
        else
        {
            sum[i] = sum[i - 1] + steps[i];
            if(steps[i]>maxstep[i-1])maxstep[i]=steps[i];
            else maxstep[i]=maxstep[i-1];
        }
    }
    
    // for(int i=0;i<n;i++)cout<<steps[i]<<" ";
    // cout<<endl;
    for (long long i = 0; i < q; i++){
        cin >> query[i];
        if(query[i]>=maxstep[n-1]) cout<<sum[n-1]<<" ";
        else if(query[i]<maxstep[0]){
            cout<<"0"<<" ";
        }
        else{

        long long k= BinarySearch(query[i],maxstep,n);
        cout<<sum[k]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}