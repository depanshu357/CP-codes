#include<bits/stdc++.h>
using namespace std;
long long  arr[int (1e7+10)];
int main(){
  long long n,m;
  cin>>n>>m;
  while(m--){
    long long a,b,k;
    cin>>a>>b>>k;
    arr[a]+=k;
    arr[b+1]+=-k;
  }

  long long max=-1;
  for(long long  i=1;i<=n;i++){
        arr[i]+=arr[i-1];
        if(max<arr[i]) max =arr[i];
  }
  cout<<max;

}