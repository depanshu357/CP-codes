#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void solve(){
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> preMax(n),sufMax(n);
    map<int,int> mp;
    int maxVal = arr[0];
    preMax[0] = arr[0];
    mp[arr[0]]++;
    int maxi = 1;
    for(int i=1;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]] > maxi){maxi = mp[arr[i]];
            preMax[i] = arr[i];
            maxVal = arr[i];
        }else if(mp[arr[i]] >= maxi && arr[i]>maxVal){
            preMax[i] = arr[i];
            maxVal = arr[i];
        }
        else preMax[i] = preMax[i-1];
    }
    mp.clear();
    sufMax[n-1]=arr[n-1];
    mp[arr[n-1]]++;
    maxi = 1;
    maxVal = arr[n-1];
    for(int i = n-2;i>=0;i--){
        mp[arr[i]]++;
        if(mp[arr[i]] > maxi){
            maxi = mp[arr[i]];
            sufMax[i] = arr[i];
            maxVal = arr[i];
        }else if(mp[arr[i]] >= maxi && arr[i]>maxVal){
            maxVal = arr[i];
            sufMax[i] = arr[i];
        }
        else sufMax[i] = sufMax[i+1];
    }
    for(int i=0;i<q;i++){
        int l,r;cin>>l>>r;
        l--;r--;
        l = l%n;r = r%n;
        if(mp[preMax[i]] == mp[sufMax[r]]){
            cout<<max(preMax[i],sufMax[r])<<'\n';
        }
        else if(mp[preMax[i]] > mp[sufMax[r]]){
            cout<<preMax[i]<<'\n';
        }else{
            cout<<sufMax[i]<<'\n';
        }
        
    }
}