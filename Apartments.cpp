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
    int applicants,apartments,k;
    cin>>applicants>>apartments>>k;
    vector<int> des_size(applicants);
    vector<int> apart_size(apartments);
    multiset<int> st;
    for(int i=0;i<applicants;i++) {cin>>des_size[i];st.insert(des_size[i]);}
    for(int i=0;i<apartments;i++) cin>>apart_size[i];
    sort(apart_size.begin(),apart_size.end());
    sort(des_size.begin(),des_size.end());
    int count = 0;
    for(int i=0;i<apartments;i++){
        auto it = (st.lower_bound(apart_size[i]-k));
        if(it==st.end()) continue;
        int desired = *it;
        if(desired > apart_size[i]+k)continue;
        else {st.erase(it);count++;}
    }
    cout<<count;
}