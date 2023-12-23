#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
#define INT_SIZE 32;
struct TrieNode{
    int value ;
    TrieNode* brr[2];
};
TrieNode* newNode(){
    TrieNode* temp = new TrieNode;
    temp->value = 0;
    temp->brr[0] = temp->brr[1] = NULL;
    return temp;
}
void insert(int num, TrieNode* root){
    TrieNode* temp = root;
    for(int i=31;i>=0; i--){
        int val = ((num>>i) & (1));
        if(temp->brr[val]==NULL){
            temp->brr[val] = newNode();
        }
            temp = temp->brr[val];
    }
    temp->value = num;
}
int query(TrieNode* root, int pre_xor){
    TrieNode* temp = root;
    for(int i=31;i>=0; i--){
        int val = (pre_xor>>i)&(1);
        if (temp->brr[1-val]!=NULL)
            temp = temp->brr[1-val];
        else if (temp->brr[val] != NULL)
            temp = temp->brr[val];
    }
    return ((temp->value)^pre_xor);
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    int pre_xor = 0;
    TrieNode* root = newNode();
    insert(0,root);
    int result = 0;
    for(int i=0;i<n;i++){
        pre_xor = (pre_xor^arr[i]);
        insert(pre_xor,root);
        result = max(result,query(root,pre_xor));
    }
    cout<<result<<'\n';
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--)solve();
}