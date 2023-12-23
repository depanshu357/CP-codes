#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll comicBooks, coins , coinsOffered, coinsNeeded;
    cin>> comicBooks >> coins >> coinsNeeded >> coinsOffered;
    if( (coins/coinsNeeded) >= comicBooks){cout<<comicBooks<<'\n';return 0;}
    ll ans = (coins/coinsNeeded);
    comicBooks -= (coins/coinsNeeded);
    coins = (coins%coinsNeeded);
    ll l = 0,r = comicBooks;
    while(r>=l){
        ll mid  = l + (r-l)/2;
        if( coins+mid*coinsOffered == (comicBooks - mid)*(coinsNeeded)){ans+=(comicBooks - mid);cout<<ans<<'\n';return 0;}
        else if(coins + (mid*coinsOffered) > ((comicBooks - mid)*(coinsNeeded))){r = mid-1;}
        else l = mid + 1;
    }
    // cout<<(comicBooks -   l)<<" ";
    ans += (comicBooks - l);
    cout<<ans<<'\n';
}