#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
void construct_tree(vector<ll> &arr,vector<pair<ll,ll>> &segment_tree,ll low,ll high,ll pos){
    if(low == high){
        segment_tree[pos] = {arr[low],arr[low]};
        return;
    }
    ll mid = (low+high)/2;
    construct_tree(arr,segment_tree,low,mid,2*pos+1);
    construct_tree(arr,segment_tree,mid+1,high,2*pos+2);
    segment_tree[pos].first = min(segment_tree[2*pos+1].first,segment_tree[2*pos+2].first);
    segment_tree[pos].second = max(segment_tree[2*pos+1].second,segment_tree[2*pos+2].second);
}
ll findMin(vector<pair<ll,ll>> &segment_tree,ll q_low,ll q_high,ll low,ll high,ll pos){
    if(q_low<=low && q_high>=high) return segment_tree[pos].first;
    if(q_low>high || q_high<low) return INT_MAX;
    ll mid = (low+high)/2;
    return min(findMin(segment_tree,q_low,q_high,low,mid,2*pos+1),findMin(segment_tree,q_low,q_high,mid+1,high,2*pos+2));
}
ll findMax(vector<pair<ll,ll>> &segment_tree,ll q_low,ll q_high,ll low,ll high,ll pos){
    if(q_low<=low && q_high>=high) return segment_tree[pos].second;
    if(q_low>high || q_high<low) return INT_MIN;
    ll mid = (low+high)/2;
    return max(findMax(segment_tree,q_low,q_high,low,mid,2*pos+1),findMax(segment_tree,q_low,q_high,mid+1,high,2*pos+2));
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll size = pow(2,log2(n)+2);
    vector<pair<ll,ll>> segment_tree(size);
    construct_tree(arr,segment_tree,0,n-1,0);
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n-1;j++){
            ll n1 =  findMax(segment_tree,0,i,0,n-1,0);
            ll n2 = findMin(segment_tree,i+1,j,0,n-1,0);
            ll n3 = findMax(segment_tree,j+1,n-1,0,n-1,0);
            if(n1==n2 && n2==n3){
                cout<<"YES\n";
                cout<<i+1<<" "<<j-i<<" "<<n-j-1<<'\n';
                return;
            }

        }
    }
    cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}