#include <bits/stdc++.h>
using namespace std;
long long Inversions(long long arr[],long long n){
    long long zero_no =  0;
    for(long long i=0;i<n;i++){
        if(arr[i]==0)zero_no+=1;
    }
    long long ans=0;
    for(long long i=0;i<n;i++){
        if(arr[i]==1){
            ans+=zero_no;
        }else if(arr[i]==0){
            zero_no--;
        }
    }
    return ans;
}
void solve()
{
    long long n;
    cin >> n;
    long long arr[n];
    long long init_0=n, last_1=-1;
    long long case1[n],case2[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        case1[i]=case2[i]=arr[i];
        if(arr[i]==0 && init_0>i) init_0=i;
        else if(arr[i]==1  && last_1<i)last_1=i;
    }
    if(init_0<n)
    case1[init_0]=1;
    if(last_1>=0)
    case2[last_1]=0;
    long long count_inversions=0,count_inversions1=0,count_inversions2=0;
    count_inversions=Inversions(arr,n);
    count_inversions1=Inversions(case1,n);
    count_inversions2=Inversions(case2,n);
    cout<<max(count_inversions,max(count_inversions1,count_inversions2))<<endl;

}
int  main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}