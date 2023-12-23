#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    multiset<long long> Candy_bag;
    for(int i=0;i<n;i++){
       long long Candy;
       cin>>Candy;
       Candy_bag.insert(Candy);
    }
    long long Candy_sum=0;
    for(int i=0;i<k;i++){
        auto it = --Candy_bag.end();
        Candy_sum+=(*it);
        Candy_bag.erase(it);
        Candy_bag.insert((*it)/2);
    }
    cout<<Candy_sum<<endl;
   }
}